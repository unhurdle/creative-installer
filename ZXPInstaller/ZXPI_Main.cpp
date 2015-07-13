//
// Command line ZXP installer
//
// This is a replacement for the closed-source ZXP installer from Adobe
// By writing it in portable C code, it can be used on Mac and Windows.
//
// It can be recompiled using only freely available tools.
//
// It is meant to be wrapped into a user-friendly UI using any tool that
// can call command-line programs.
//
// As its input it takes either a ZXP file or an exploded extension folder
//
// Usage:
//
// ZXPInstaller -zxp <ZXPFilePath>
//

#include <stdio.h>

#include "ZXPI_AdobeRepositoryItf.h"
#include "ZXPI_ArgumentParser.h"
#include "ZXPI_Constants.h"
#include "ZXPI_ExManItf.h"
#include "ZXPI_InstallZXP.h"
#include "ZXPI_Logging.h"

int main(int argc, const char * argv[]) {

  TZXPI_Context context;
  
  do {
  
    ZXPI_ParseArguments(argc, argv, &context);
    
    switch (context.mode) {
      
      default:
        ZXPI_LogError("main: bad context.mode");
        break;
        
      case ZXPI_Mode_Help:
        fprintf(stderr, "Usage: ...");
        break;
        
      case ZXPI_Mode_InstallZXP:
        ZXPI_InstallZXP(&context);
        break;

      case ZXPI_Mode_ListInstalled:
        ZXPI_AdobeRepositoryItf_DoCommand(&context, ZXPI_AdobeRepositoryItf_Command_LIST);
        break;

      case ZXPI_Mode_ListExMan:
        ZXPI_ExManItf_DoCommand(&context, ZXPI_ExManItf_Command_LIST);
        break;
    }
    
  }
  while (FALSE);
  
}
