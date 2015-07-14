//
//  ZXPI_AdobeRepositoryItf.cpp
//  ZXPInstaller
//
// To build Boost on Mac OS X I used:
//
// ./b2 threading=multi toolset=darwin architecture=x86 target-os=darwin address-model=32_64 stage
//
//  Created by Kris Coppieters on 13/07/15.
//  Copyright (c) 2015 Kris Coppieters. All rights reserved.
//

#include <string>
#include <fstream> 
#include <sstream>
#include <boost/algorithm/string.hpp>
#include <boost/filesystem.hpp>

#include <pwd.h>
#include <sys/stat.h>

#include "sqlite3.h"

#include "ZXPI_RestoreCompilerWarnings.h"

#include "ZXPI_Constants.h"
#include "ZXPI_AdobeRepositoryItf.h"
#include "ZXPI_Logging.h"

bool  ZXPI_AdobeRepositoryItf_DeriveApplicationPath(const std::string& pathString, std::string& applicationPath);
bool  ZXPI_AdobeRepositoryItf_DerivePhotoshopPath(const std::string& pathString, std::string& applicationPath);
void  ZXPI_AdobeRepositoryItf_ListInstalled(TZXPI_Context* context);
int   ZXPI_AdobeRepositoryItf_ListInstalled_CallBack(void *notUsed, int argc, char **argv, char **azColName);
void  ZXPI_AdobeRepositoryItf_WhereIs(TZXPI_Context* context);
int   ZXPI_AdobeRepositoryItf_WhereIs_CallBack(void *notUsed, int argc, char **argv, char **azColName);
void  ZXPI_AdobeRepositoryItf_WhereIs(TZXPI_Context* context);

bool ZXPI_AdobeRepositoryItf_DeriveApplicationPath(const std::string& pathString, std::string& applicationPath) {
  
  bool searching = true;
  bool found = false;
  
  applicationPath.clear();
  
  boost::filesystem::path curSearchPath(pathString);
  std::string extension;
  while (searching) {
    if (! boost::filesystem::exists(curSearchPath)) {
      searching = false;
    }
    else if (boost::filesystem::is_directory(curSearchPath)) {
      extension = curSearchPath.extension().native();
      if (extension == ".app") {
        searching = false;
        found = true;
        applicationPath = curSearchPath.native();
      }
      else {
        boost::filesystem::directory_iterator end_itr; // default construction yields past-the-end
        boost::filesystem::directory_iterator itr(curSearchPath);
        while (itr != end_itr) {
#if MACINTOSH
          if (boost::filesystem::is_directory(itr->status())) {
            extension = itr->path().extension().native();
            boost::algorithm::to_lower(extension);
            if (extension == ".app") {
              searching = false;
              found = true;
              applicationPath = itr->path().native();
            }
          }
#endif
          ++itr;
        }
      }
    }
    if (searching) {
      if (! curSearchPath.has_parent_path()) {
        searching = false;
      }
      else {
        curSearchPath = curSearchPath.parent_path();
      }
    }
  }
  
  return found;
}

bool ZXPI_AdobeRepositoryItf_DerivePhotoshopPath(const std::string& pathString, std::string& applicationPath) {
  
  bool searching = true;
  bool found = false;
  
  //
  // For Photoshop CC 2015 (and above?), the path to the Photoshop app resides in a preferences file
  // ~/Library/Preferences/Adobe Photoshop CC 2015 Paths
  //
  
  applicationPath.clear();
  
  boost::filesystem::path curSearchPath(pathString);
  while (searching) {
    const std::string appName(curSearchPath.filename().native());
    if (boost::starts_with(appName, "Adobe Photoshop CC")) {
      searching = false;
      found = true;
      passwd* pw = getpwuid(getuid());
      std::string homeFolder(pw->pw_dir);
      const std::string prefsFile(homeFolder + "/Library/Preferences/" + appName + " Paths");
      
      std::ifstream prefsFileStream(prefsFile.c_str(), std::ios::in | std::ios::binary);
      if (prefsFileStream) {
        std::ostringstream contents;
        contents << prefsFileStream.rdbuf();
        prefsFileStream.close();
        //
        // The prefs file contains two strings with a binary zero in-between. Go via
        // a C-string so the zero is seen as a null terminator
        //
        std::string applicationFolderPathString = std::string(contents.str().c_str());
        
        //
        // Now find the .app file inside the folder
        //
        ZXPI_AdobeRepositoryItf_DeriveApplicationPath(applicationFolderPathString, applicationPath);
      }
    }
    if (searching) {
      if (! curSearchPath.has_parent_path()) {
        searching = false;
      }
      else {
        curSearchPath = curSearchPath.parent_path();
      }
    }
  }
  
  return found;
}

void ZXPI_AdobeRepositoryItf_DoCommand(TZXPI_Context* context) {

  do {
  
    if (context == NULL) {
      ZXPI_LogError("ZXPI_AdobeRepositoryItf_DoCommand: context is NULL");
      break;
    }
    
    switch (context->command) {
      default:
        ZXPI_LogError("ZXPI_AdobeRepositoryItf_DoCommand: invalid command");
        break;
        
      case ZXPI_Command_ListInstalled:
        ZXPI_AdobeRepositoryItf_ListInstalled(context);
        break;
        
      case ZXPI_Command_WhereIs:
        ZXPI_AdobeRepositoryItf_WhereIs(context);
        break;
    }
    
  }
  while (FALSE);
  
}

void ZXPI_AdobeRepositoryItf_ListInstalled(TZXPI_Context* context) {

  int result = SQLITE_OK;
  sqlite3* dbHandle = NULL;
    
  do {
  
    result =
      sqlite3_open_v2(
        kFilePath_AdobePCDDataBase,
        &dbHandle,
        SQLITE_OPEN_READONLY,
        NULL);
    if (result != SQLITE_OK) {
      ZXPI_LogError("ZXPI_AdobeRepositoryItf_ListInstalled: cannot open database");
      break;
    }
    
    char* errorMessage;
    result =
      sqlite3_exec(
        dbHandle,
        "select \
           da.value as BridgeTalkCode, db.value as driverAMTConfigPath \
         from \
           domain_data as da, domain_data as db \
         where \
             da.key = 'BridgeTalkCode' \
          and \
            da.subDomain = db.subDomain \
          and \
            db.key = 'driverAMTConfigPath'",
        ZXPI_AdobeRepositoryItf_ListInstalled_CallBack,
        0,
        &errorMessage);
    
    if (result != SQLITE_OK) {
      ZXPI_LogError("ZXPI_AdobeRepositoryItf_ListInstalled: SQL query error %s", errorMessage);
      sqlite3_free(errorMessage);
      break;
    }
    
  }
  while (false);

  if (dbHandle != NULL) {
    result = sqlite3_close(dbHandle);
    dbHandle = NULL;
    if (result != SQLITE_OK) {
      ZXPI_LogError("ZXPI_AdobeRepositoryItf_ListInstalled: cannot close database");
    }
  }
  
}

int ZXPI_AdobeRepositoryItf_ListInstalled_CallBack(void *notUsed, int argc, char **argv, char **azColName) {

    for (int argIdx = 0; argIdx < argc; argIdx++) {
      printf("%s = %s\n", azColName[argIdx], argv[argIdx] ? argv[argIdx] : "NULL");
    }
  
    printf("\n");
    
    return SQLITE_OK;
}

void ZXPI_AdobeRepositoryItf_WhereIs(TZXPI_Context* context) {

  int result = SQLITE_OK;
  sqlite3* dbHandle = NULL;
  sqlite3_stmt* preparedStmt = NULL;
  
  do {
  
    result =
      sqlite3_open_v2(
        kFilePath_AdobePCDDataBase,
        &dbHandle,
        SQLITE_OPEN_READONLY,
        NULL);
    if (result != SQLITE_OK) {
      ZXPI_LogError("ZXPI_AdobeRepositoryItf_WhereIs: cannot open database");
      break;
    }
    
    result =
      sqlite3_prepare(
        dbHandle,
        "select \
           db.value as driverAMTConfigPath \
         from \
           domain_data as da, domain_data as db \
         where \
            da.key = 'BridgeTalkCode' \
          and \
            da.subDomain = db.subDomain \
          and \
            db.key = 'driverAMTConfigPath' \
          and \
            da.value like ?",
        -1,
        &preparedStmt,
        NULL);
    if (result != SQLITE_OK) {
      ZXPI_LogError("ZXPI_AdobeRepositoryItf_WhereIs: sqlite3_prepare error %d", result);
      break;
    }

    std::string pattern("/adobe/bridgetalk/");
    pattern.append(context->appIdentifier);
    if (! context->appVersionIdentifier.empty()) {
      pattern.append("-");
      pattern.append(context->appVersionIdentifier);
    }
    pattern.append("%");
    
    result = sqlite3_bind_text(
      preparedStmt,
      1,
      pattern.c_str(),
      -1,
      NULL);
    if (result != SQLITE_OK) {
      ZXPI_LogError("ZXPI_AdobeRepositoryItf_WhereIs: sqlite3_bind_text error %d", result);
      break;
    }
    
    do {
      result = sqlite3_step(preparedStmt);
      if (result == SQLITE_OK || result == SQLITE_ROW) {
        const unsigned char* cPath = sqlite3_column_text(preparedStmt, 0);
        if (cPath != NULL) {
          std::string pathString((char*) cPath);
          std::string applicationPath;
          ZXPI_AdobeRepositoryItf_DeriveApplicationPath(pathString, applicationPath);
          
          if (applicationPath.empty() && boost::starts_with(context->appIdentifier, "photoshop")) {
            ZXPI_AdobeRepositoryItf_DerivePhotoshopPath(pathString, applicationPath);
          }
          
          if (! applicationPath.empty()) {
            printf("%s\n",applicationPath.c_str());
          }
          
        }
      }
    }
    while (result == SQLITE_ROW);
    
    
    if (result != SQLITE_DONE) {
      ZXPI_LogError("ZXPI_AdobeRepositoryItf_WhereIs: sqlite3_step error %d", result);
      break;
    }
    
  }
  while (false);

  if (preparedStmt != NULL) {
    result = sqlite3_finalize(preparedStmt);
    preparedStmt = NULL;
    if (result != SQLITE_OK) {
      ZXPI_LogError("ZXPI_AdobeRepositoryItf_WhereIs: cannot finalize prepared statement");
    }
  }
  
  if (dbHandle != NULL) {
    result = sqlite3_close(dbHandle);
    dbHandle = NULL;
    if (result != SQLITE_OK) {
      ZXPI_LogError("ZXPI_AdobeRepositoryItf_WhereIs: cannot close database");
    }
  }
  
}
