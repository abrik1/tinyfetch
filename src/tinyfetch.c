#include <stdio.h>
#include <stdlib.h>
#include "config.h"

int main(void){
   #if SHOW_USER
      printf("\x1b[31muser:\x1b[0m \t%s\n", getenv("USER"));
   #endif

   #if SHOW_SH
      printf("\x1b[32msh:\x1b[0m \t%s\n", getenv("SHELL"));
   #endif

   #if SHOW_TERM
      printf("\x1b[33mterm:\x1b[0m \t%s\n", getenv("TERM"));
   #endif

   #if SHOW_LOCALE
      printf("\x1b[34mlocale:\x1b[0m\t%s\n", getenv("LANG"));
   #endif

   #if SHOW_COLS
      #if COL_BLOCKS_COL
         printf("\x1b[35mcolors: \x1b[0m"
         "\x1b[41m" col_block
         "\x1b[42m" col_block
         "\x1b[43m" col_block
         "\x1b[44m" col_block
         "\x1b[45m" col_block
         "\x1b[0m\n");
      #else 
         printf("\x1b[35mcolors: \x1b[0m"
         "\x1b[31m" col_block
         "\x1b[32m" col_block
         "\x1b[33m" col_block
         "\x1b[34m" col_block
         "\x1b[35m" col_block
         "\x1b[0m\n");
      #endif
   #endif
}
