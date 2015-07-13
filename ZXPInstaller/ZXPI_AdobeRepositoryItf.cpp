//
//  ZXPI_AdobeRepositoryItf.cpp
//  ZXPInstaller
//
//  Created by Kris Coppieters on 13/07/15.
//  Copyright (c) 2015 Kris Coppieters. All rights reserved.
//

#include "sqlite3.h"

#include "ZXPI_RestoreCompilerWarnings.h"

#include "ZXPI_Constants.h"
#include "ZXPI_AdobeRepositoryItf.h"
#include "ZXPI_Logging.h"

void ZXPI_AdobeRepositoryItf_LIST(TZXPI_Context* context);
void ZXPI_AdobeRepositoryItf_Read_PCD(TZXPI_Context* context);
int ZXPI_AdobeRepositoryItf_Read_PCD_Callback(void *notUsed, int argc, char **argv, char **azColName);
void ZXPI_AdobeRepositoryItf_Read_PDB(TZXPI_Context* context);
int ZXPI_AdobeRepositoryItf_Read_PDB_Callback(void *notUsed, int argc, char **argv, char **azColName);

void ZXPI_AdobeRepositoryItf_DoCommand(TZXPI_Context* context, int command) {

  do {
  
    if (context == NULL) {
      ZXPI_LogError("ZXPI_AdobeRepositoryItf_DoCommand: context is NULL");
      break;
    }
    
    switch (command) {
      default:
        ZXPI_LogError("ZXPI_AdobeRepositoryItf_DoCommand: invalid command");
        break;
        
      case ZXPI_AdobeRepositoryItf_Command_LIST:
        ZXPI_AdobeRepositoryItf_LIST(context);
        break;
    }
    
  }
  while (FALSE);
  
}

int ZXPI_AdobeRepositoryItf_Read_PDB_Callback(void *notUsed, int argc, char **argv, char **azColName) {

    for (int argIdx = 0; argIdx < argc; argIdx++) {
      const char* colName;
      if (argIdx == 0) {
        colName = "INSTALLDIR";
      }
      else if (argIdx == 1) {
        colName = "KeyFolder";
      }
      else {
        colName = azColName[argIdx];
      }
      printf("%s = %s\n", colName, argv[argIdx] ? argv[argIdx] : "NULL");
    }
  
    printf("\n");
    
    return SQLITE_OK;
}

void ZXPI_AdobeRepositoryItf_Read_PDB(TZXPI_Context* context) {

  int result = SQLITE_OK;
  sqlite3* dbHandle = NULL;
    
  do {
  
    result =
      sqlite3_open_v2(
        kFilePath_AdobePDBDataBase,
        &dbHandle,
        SQLITE_OPEN_READONLY,
        NULL);
    if (result != SQLITE_OK) {
      ZXPI_LogError("ZXPI_AdobeRepositoryItf_Read_PDB: cannot open database");
      break;
    }
    
    char* errorMessage;
    result =
      sqlite3_exec(
        dbHandle,
        "select \
          payload_data.value, payload_data_key.value, payloads.version, payloads.productName \
         from \
            payloads, payload_data, payload_data as payload_data_key \
         where \
              payloads.payloadid = payload_data.payloadid \
            and \
              payloads.payloadid = payload_data_key.payloadid \
            and \
              payload_data.key = 'INSTALLDIR' \
            and \
              payload_data_key.key='KeyFolder' \
            and \
              ( \
                productName in \
                ( \
                  'Adobe InDesign CS6 Application Base Files', \
                  'Adobe InDesign CC Application Base Files', \
                  'Adobe ID CC2014 AppBase', \
                  'Adobe ID CC2015 AppBase', \
                  'Adobe InCopy CS6 Application Base Files', \
                  'Adobe InCopy CC Application Base Files', \
                  'Adobe IC CC2014 AppBase', \
                  'Adobe IC CC2015 AppBase', \
                  'Adobe Photoshop CC Core', \
                  'Adobe Photoshop CC 2014 Core', \
                  'Adobe Photoshop CC 2015 Core', \
                  'Adobe Illustrator CC', \
                  'Adobe Illustrator CC 2014', \
                  'Adobe Illustrator CC 2015' \
                ) \
            )",
        ZXPI_AdobeRepositoryItf_Read_PDB_Callback,
        0,
        &errorMessage);
    
    if (result != SQLITE_OK) {
      ZXPI_LogError("ZXPI_AdobeRepositoryItf_Read_PDB: SQL query error %s", errorMessage);
      sqlite3_free(errorMessage);
      break;
    }
    
  }
  while (false);

  if (dbHandle != NULL) {
    result = sqlite3_close(dbHandle);
    dbHandle = NULL;
    if (result != SQLITE_OK) {
      ZXPI_LogError("ZXPI_AdobeRepositoryItf_Read_PDB: cannot close database");
    }
  }
  
}

void ZXPI_AdobeRepositoryItf_LIST(TZXPI_Context* context) {
  
  //
  // The installed products reside in multiple databases:
  //
  // /Library/Application Support/Adobe/Adobe PCD/pcd.db (older versions, up to CS6)
  // /Library/Application Support/Adobe/caps/pdb.db (newer versions)
  //
  // There is also stuff in files called 'caps.db' but that does not seem to be very interesting
  // at present. Might change as I find out more.
  //
  
  ZXPI_AdobeRepositoryItf_Read_PDB(context);
  
  
}