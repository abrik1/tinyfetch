#include <stdio.h>
#include <stdlib.h>

int main(void){
   printf("\x1b[31muser:\x1b[0m %s\n", getenv("USER"));
   printf("\x1b[32msh:\x1b[0m %s\n", getenv("SHELL"));
   printf("\x1b[33mterm:\x1b[0m %s\n", getenv("TERM"));
   printf("\x1b[34mlocale:\x1b[0m %s\n", getenv("LANG"));
   printf("\x1b[35mcolors: \x1b[0m\x1b[41m  \x1b[42m  \x1b[43m  \x1b[44m  \x1b[45m  \x1b[0m\n");
   return 0;
}
