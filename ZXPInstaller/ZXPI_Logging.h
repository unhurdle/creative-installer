//
//  ZXPI_Logging.h
//  ZXPInstaller
//
//  Created by Kris Coppieters on 13/07/15.
//  Copyright (c) 2015 Kris Coppieters. All rights reserved.
//

#ifndef _ZXP_Logging_
#define _ZXP_Logging_

#include "ZXPI_ConfigConstants.h"

enum {
  ZXPI_LogLevel_NONE = 0,
  ZXPI_LogLevel_ERROR,
  ZXPI_LogLevel_WARNING,
  ZXPI_LogLevel_NOTE,
  ZXPI_LogLevel_TRACE
};

#if ZXPI_ENABLE_LOGGING
#define ZXPI_LogError(...)   ZXPI_LogMessage(ZXPI_LogLevel_ERROR, __VA_ARGS__)
#define ZXPI_LogWarning(...) ZXPI_LogMessage(ZXPI_LogLevel_WARNING, __VA_ARGS__)
#define ZXPI_LogNote(...)    ZXPI_LogMessage(ZXPI_LogLevel_NOTE, __VA_ARGS__)
#define ZXPI_LogTrace(...)   ZXPI_LogMessage(ZXPI_LogLevel_TRACE, __VA_ARGS__)
#else
#define ZXPI_LogError(...)
#define ZXPI_LogWarning(...)
#define ZXPI_LogNote(...)
#define ZXPI_LogTrace(...)
#endif

extern int  ZXPI_GetLogLevel();
extern void ZXPI_SetLogLevel(const int logLevel);
extern void ZXPI_LogMessage(const int level, const char* format,...);

#endif 
