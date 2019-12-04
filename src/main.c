#include "../include/err.h"
#include "../include/useful.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define HOSTNAME_MX_LENG 50
const char *  DEF_HOSTNAME = "localhost";
const int     DEF_PORT = 8080;

int main (int argc, char **argv)
{
  char *host = NULL;
  int   port = 0;

  if (argc == 1) {
    fprintf(stderr, "Missing --player N paramater");
    help(argv[0]);

    return ERR_IN;
  }

  //==================================================================
  //Parameters interpretation
  // @TODO remove those vars..
  int id = 0;
  for (int i = 0; i < argc; ++i) {
    if ( (strcmp(argv[i], "--help") == 0) 
      || (strcmp(argv[i], "-h") == 0) ) {
      help(argv[0]);
      break;
    } else if (strcmp(argv[i], "--player") == 0) {
      ++i;
      id = atoi(argv[i]);
    } else if ( (strcmp(argv[i], "--port") == 0) 
             || (strcmp(argv[i], "-p") == 0) ) {
      ++i;
      port = atoi(argv[i]);
    } else if ( (strcmp(argv[i], "--host") == 0) 
             || (strcmp(argv[i], "-h") == 0) ) {
      ++i;
      host = strdup(argv[i]);
    }
  }
  // set default parameters
  if (host == NULL)
    host = strdup(DEF_HOSTNAME);
  if (port == 0)
    port = DEF_PORT;
  // end parameter interpretation
  //==================================================================


//  // @TODO remove
//  printf("\nhostname %s", host);
//  printf("\nport %d", port);
//  printf("\nplayer %d", id);
//

  free(host);
  return OK;
}
