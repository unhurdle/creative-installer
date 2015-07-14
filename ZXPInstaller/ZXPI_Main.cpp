//
// AdobePoker: Adobe repository explorer
//

#include <stdio.h>

#include "ZXPI_AdobeRepositoryItf.h"
#include "ZXPI_ArgumentParser.h"
#include "ZXPI_Constants.h"
#include "ZXPI_Logging.h"

int main(int argc, const char * argv[]) {

  TZXPI_Context context;
  
  do {
  
    ZXPI_ParseArguments(argc, argv, &context);
    
    switch (context.command) {
      
      default:
        ZXPI_LogError("main: bad context.mode");
        break;
        
      case ZXPI_Command_Help:
        fprintf(stderr, "Usage: ...");
        break;
        
      case ZXPI_Command_WhereIs:
      case ZXPI_Command_ListInstalled:
        ZXPI_AdobeRepositoryItf_DoCommand(&context);
        break;

    }
    
  }
  while (FALSE);
  
}
