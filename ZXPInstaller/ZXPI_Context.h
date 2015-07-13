//
//  ZXPI_Context.h
//  ZXPInstaller
//
//  Created by Kris Coppieters on 13/07/15.
//  Copyright (c) 2015 Kris Coppieters. All rights reserved.
//

#ifndef _ZXPI_Context_
#define _ZXPI_Context_

#include <string>

typedef enum {
  ZXPI_Mode_Help = 0,
  ZXPI_Mode_InstallZXP,
  ZXPI_Mode_ListInstalled,
  ZXPI_Mode_ListExMan
} TZXPI_Mode;

struct TZXPI_Context {
  TZXPI_Mode mode;
  std::string zxpPath;
};

#endif 

