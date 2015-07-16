//
//  ZXPI_RestoreCompilerWarnings.h
//  ZXPInstaller
//
//  Created by Kris Coppieters on 13/07/15.
//  Copyright (c) 2015 Kris Coppieters. All rights reserved.
//

#ifndef _ZXPI_RestoreCompilerWarnings_
#define _ZXPI_RestoreCompilerWarnings_

//
// We disabled some warnings that got triggered in the 'external' sources
// in our precompiled headers, so we can compile those externals without
// triggering warning.
// However, for our own sources we do want the warnings to trigger, so before
// anything else, we re-enable all that was disabled
//

#if MACINTOSH
#pragma clang diagnostic pop
#endif

#endif
