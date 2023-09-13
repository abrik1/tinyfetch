#include <stdio.h>
#include <stdlib.h>
#include "config.h"

int main(void){
   if (SHOW_USER == 1){
   	printf("\x1b[31muser:\x1b[0m %s\n", getenv("USER"));
   }

   if(SHOW_SH == 1){
   	printf("\x1b[32msh:\x1b[0m %s\n", getenv("SHELL"));
   }

   if(SHOW_TERM == 1){
   	printf("\x1b[33mterm:\x1b[0m %s\n", getenv("TERM"));
   }

   if(SHOW_LOCALE == 1){
   	printf("\x1b[34mlocale:\x1b[0m %s\n", getenv("LANG"));
   }

   if(SHOW_COLS == 1){
   	if(COL_BLOCKS_COL == 1){
   	   printf("\x1b[35mcolors: \x1b[0m\x1b[41m%s\x1b[42m%s\x1b[43m%s\x1b[44m%s\x1b[45m%s\x1b[0m\n", col_block, col_block, col_block, col_block, col_block);
   	} else {
	    printf("\x1b[35mcolors: \x1b[0m\x1b[31m%s\x1b[32m%s\x1b[33m%s\x1b[34m%s\x1b[35m%s\x1b[0m\n", col_block, col_block, col_block, col_block, col_block);
   	}
   }
   return 0;
}
