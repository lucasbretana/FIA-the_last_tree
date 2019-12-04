#include "../include/err.h"
#include <stdio.h>

/**
 * Print a helper for the player
 */
void help(const char* prog_name)
{
  fprintf(stdout, "\n");
  fprintf(stdout, "\nUsage: %s [OPTIONS]", prog_name);
  fprintf(stdout, "\nStart a player for the game \"The Last Tree\"");
  fprintf(stdout, "\n\t--player N\t\tspecifies the player round (0 or 1) \t\t[MANDAROTY]");
  fprintf(stdout, "\n\t--host <hostname>\tspecifies the server's hostname\t\t\t[DEFAULT \"localhost\"]");
  fprintf(stdout, "\n\t--port N\t\tspecifies the server's port\t\t\t[DEFAULT 8080]");
  fprintf(stdout, "\n\n");
  return;
}
