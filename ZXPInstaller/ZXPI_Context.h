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
  ZXPI_Command_Help = 0,
  ZXPI_Command_ListInstalled,
  ZXPI_Command_WhereIs
} TZXPI_Command;

struct TZXPI_Context {
  TZXPI_Command command;
  std::string appIdentifier;
  std::string appVersionIdentifier;
  
  TZXPI_Context():
    command(ZXPI_Command_Help),
    appIdentifier(),
    appVersionIdentifier()
    {};
};

#endif 

