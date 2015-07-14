//
//  ZXPI_AdobeRepositoryItf.h
//  ZXPInstaller
//
//  Created by Kris Coppieters on 13/07/15.
//  Copyright (c) 2015 Kris Coppieters. All rights reserved.
//

#ifndef _ZXPI_AdobeRepositoryItf_
#define _ZXPI_AdobeRepositoryItf_

#include "ZXPI_Context.h"

#if MACINTOSH
#define kFilePath_AdobePCDDataBase "/Library/Application Support/Adobe/Adobe PCD/pcd.db"
#define kFilePath_AdobePDBDataBase "/Library/Application Support/Adobe/caps/pdb.db"
#endif

extern void ZXPI_AdobeRepositoryItf_DoCommand(TZXPI_Context* context);

#endif
