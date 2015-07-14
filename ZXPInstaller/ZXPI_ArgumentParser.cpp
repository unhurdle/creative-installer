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

#define ZXPI_Switch_ListInstalled "-list"
#define ZXPI_Switch_Version       "-version"
#define ZXPI_Switch_WhereIs       "-whereis"

enum {
  ZXPI_ArgParseMode_Idle = 0,
  ZXPI_ArgParseMode_Done,
  ZXPI_ArgParseMode_GetApplicationId,
  ZXPI_ArgParseMode_GetApplicationVersion
};

void ZXPI_ParseArguments(int argc, const char * argv[], TZXPI_Context* context) {
  
  do {
  
    int argIdx = 0;
    int argParseMode = ZXPI_ArgParseMode_Idle;
    
    while (argIdx < argc && argParseMode != ZXPI_ArgParseMode_Done) {
    
      switch (argParseMode)
      {
        default:
          ZXPI_LogError("ZXPI_ParseArguments: bad argParseMode");
          break;
          
        case ZXPI_ArgParseMode_Idle:
          if (strcmp(argv[argIdx], ZXPI_Switch_ListInstalled) == 0) {
            context->command = ZXPI_Command_ListInstalled;
            argParseMode = ZXPI_ArgParseMode_Done;
            break;
          }
          if (strcmp(argv[argIdx], ZXPI_Switch_WhereIs) == 0) {
            context->command = ZXPI_Command_WhereIs;
            argParseMode = ZXPI_ArgParseMode_GetApplicationId;
            break;
          }
          if (strcmp(argv[argIdx], ZXPI_Switch_Version) == 0) {
            argParseMode = ZXPI_ArgParseMode_GetApplicationVersion;
            break;
          }
          break;
          
        case ZXPI_ArgParseMode_GetApplicationId:
          context->appIdentifier = std::string(argv[argIdx]);
          argParseMode = ZXPI_ArgParseMode_Idle;
          break;

        case ZXPI_ArgParseMode_GetApplicationVersion:
          context->appVersionIdentifier = std::string(argv[argIdx]);
          argParseMode = ZXPI_ArgParseMode_Idle;
          break;

      }
      
      ++argIdx;
    }
    
  }
  while (FALSE);
  
}
