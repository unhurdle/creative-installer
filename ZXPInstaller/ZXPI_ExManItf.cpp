//
//  ZXPI_ExManItf.cpp
//  ZXPInstaller
//
//  Created by Kris Coppieters on 13/07/15.
//  Copyright (c) 2015 Kris Coppieters. All rights reserved.
//

#include "ZXPI_RestoreCompilerWarnings.h"

#include "ZXPI_Constants.h"
#include "ZXPI_ExManItf.h"
#include "ZXPI_Logging.h"

void ZXPI_ExManItf_LIST(TZXPI_Context* context);

void ZXPI_ExManItf_DoCommand(TZXPI_Context* context, int command) {

  do {
  
    if (context == NULL) {
      ZXPI_LogError("ZXPI_ExManItf_DoCommand: context is NULL");
      break;
    }
    
    switch (command) {
      default:
        ZXPI_LogError("ZXPI_ExManItf_DoCommand: invalid command");
        break;
        
      case ZXPI_ExManItf_Command_LIST:
        ZXPI_ExManItf_LIST(context);
        break;
    }
    
  }
  while (FALSE);
  
}

void ZXPI_ExManItf_LIST(TZXPI_Context* context) {
  
}