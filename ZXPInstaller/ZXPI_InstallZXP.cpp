//
//  ZXPI_InstallZXP.cpp
//  ZXPInstaller
//
//  Created by Kris Coppieters on 13/07/15.
//  Copyright (c) 2015 Kris Coppieters. All rights reserved.
//

#include <stdio.h>
#include <string.h>

#include "ZXPI_RestoreCompilerWarnings.h"

#include "ZXPI_Constants.h"
#include "ZXPI_InstallZXP.h"
#include "ZXPI_Logging.h"

void ZXPI_InstallZXP(TZXPI_Context* context) {

  FILE* zxpFile = NULL;
  
  do {
    if (context == NULL) {
      ZXPI_LogError("ZXPI_InstallZXP: context is NULL");
      break;
    }

    if (context->zxpPath.length() == 0) {
      ZXPI_LogError("ZXPI_InstallZXP: context->zxpPath is empty");
      break;
    }
    
    zxpFile = fopen(context->zxpPath.c_str(), "rb");
    if (zxpFile == NULL) {
      ZXPI_LogError("ZXPI_InstallZXP: fopen returns NULL");
      break;
    }
  }
  while (FALSE);
  
  if (zxpFile != NULL) {
    fclose(zxpFile);
    zxpFile = NULL;
  }
  
}
