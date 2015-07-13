//
//  ZXPI_ArgumentParser.cpp
//  ZXPInstaller
//
//  Created by Kris Coppieters on 13/07/15.
//  Copyright (c) 2015 Kris Coppieters. All rights reserved.
//

#include <stdlib.h>
#include <string.h>

#include "ZXPI_RestoreCompilerWarnings.h"

#include "ZXPI_ArgumentParser.h"
#include "ZXPI_Constants.h"
#include "ZXPI_Logging.h"

#define ZXPI_Switch_InstallZXP "-zxp"
#define ZXPI_Switch_ListInstalled "-list"
#define ZXPI_Switch_ListExMan "-listEM"

enum {
  ZXPI_ArgParseMode_Idle = 0,
  ZXPI_ArgParseMode_Done,
  ZXPI_ArgParseMode_GetZXPPath
};

void ZXPI_ParseArguments(int argc, const char * argv[], TZXPI_Context* context) {
  
  memset(context, 0, sizeof(TZXPI_Context));
  
  do {
  
    context->mode = ZXPI_Mode_Help;
    
    int argIdx = 0;
    int argParseMode = ZXPI_ArgParseMode_Idle;
    
    while (argIdx < argc && argParseMode != ZXPI_ArgParseMode_Done) {
    
      switch (argParseMode)
      {
        default:
          ZXPI_LogError("ZXPI_ParseArguments: bad argParseMode");
          break;
          
        case ZXPI_ArgParseMode_Idle:
          if (strcmp(argv[argIdx], ZXPI_Switch_InstallZXP) == 0) {
            argParseMode = ZXPI_ArgParseMode_GetZXPPath;
            break;
          }
          if (strcmp(argv[argIdx], ZXPI_Switch_ListInstalled) == 0) {
            context->mode = ZXPI_Mode_ListInstalled;
            argParseMode = ZXPI_ArgParseMode_Done;
            break;
          }
          if (strcmp(argv[argIdx], ZXPI_Switch_ListExMan) == 0) {
            context->mode = ZXPI_Mode_ListExMan;
            argParseMode = ZXPI_ArgParseMode_Done;
            break;
          }
          break;
          
        case ZXPI_ArgParseMode_GetZXPPath:
          context->mode = ZXPI_Mode_InstallZXP;
          context->zxpPath = std::string(argv[argIdx]);
          argParseMode = ZXPI_ArgParseMode_Done;
          break;          
      }
      
      ++argIdx;
    }
    
  }
  while (FALSE);
  
}
