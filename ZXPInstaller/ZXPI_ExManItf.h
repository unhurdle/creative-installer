//
//  ZXPI_ExManItf.h
//  ZXPInstaller
//
//  Created by Kris Coppieters on 13/07/15.
//  Copyright (c) 2015 Kris Coppieters. All rights reserved.
//

#ifndef _ZXPI_ExManItf_
#define _ZXPI_ExManItf_

#include "ZXPI_Context.h"

enum {
  ZXPI_ExManItf_Command_NO_OP = 0,
  ZXPI_ExManItf_Command_LIST
};

extern void ZXPI_ExManItf_DoCommand(TZXPI_Context* context, int command);

#endif
