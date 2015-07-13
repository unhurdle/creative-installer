//
//  ZXP_Logging.cpp
//  ZXPInstaller
//
//  Created by Kris Coppieters on 13/07/15.
//  Copyright (c) 2015 Kris Coppieters. All rights reserved.
//

#include <stdarg.h>
#include <stdio.h>

#include "ZXPI_RestoreCompilerWarnings.h"

#include "ZXPI_ConfigConstants.h"
#include "ZXPI_Constants.h"
#include "ZXPI_Logging.h"

static int gLogLevel = ZXPI_DEFAULT_LOG_LEVEL;

void ZXPI_LogMessage(const int level, const char* format,...) {
  
  do {
  
    if (gLogLevel < level) {
      break;
    }
    
    va_list argp;
    va_start(argp, format);
    
    vfprintf(stderr, format, argp);
    
    va_end(argp);
  }
  while (FALSE);
  
}

int ZXPI_GetLogLevel() {
  return gLogLevel;
}

void ZXPI_SetLogLevel(const int logLevel) {
  gLogLevel = logLevel;
}