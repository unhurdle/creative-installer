//
//  ZXPI_PrecompiledHeaders.h
//  ZXPInstaller
//
//  Created by Kris Coppieters on 13/07/15.
//  Copyright (c) 2015 Kris Coppieters. All rights reserved.
//

#ifndef _ZXPI_PrecompiledHeaders_
#define _ZXPI_PrecompiledHeaders_

//
// This header sets up the environment needed for the external sources
// to compile without warnings
//
// #include ZXPI_RestoreCompilerWarnings.h before the ZXPI sources to restore
// the disabled warnings
//
#if MACINTOSH
#pragma clang diagnostic push

#pragma clang diagnostic ignored "-Wenum-conversion"
#pragma clang diagnostic ignored "-Wconversion"
#pragma clang diagnostic ignored "-Wambiguous-macro"
#pragma clang diagnostic ignored "-Wunreachable-code"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

#if WINDOWS
#pragma warning( push )
#pragma warning( disable : 4996 )
#endif

#include "ZXPI_ConfigExpat.h"
#include "ZXPI_ConfigZlib.h"

#if WINDOWS
// Side-step conflict in ELELENT_TYPE in winioctl.h vs xmlparser.c
#define ELEMENT_TYPE ELEMENT_TYPE_WIN
#include <Windows.h>
#undef ELEMENT_TYPE
#endif

#endif
