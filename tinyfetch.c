#include <stdio.h>
#include <stdlib.h>
#include <linux/version.h>

int main(void){
   printf("┌────────┐\n");
   printf("│\x1b[31m user   \x1b[0m│ %s\n", getenv("USER"));
   printf("│\x1b[32m sh     \x1b[0m│ %s\n", getenv("SHELL"));
   printf("│\x1b[33m term   \x1b[0m│ %s\n", getenv("TERM"));
   printf("│\x1b[34m locale \x1b[0m│ %s\n", getenv("LANG"));
   printf("│\x1b[35m kernel \x1b[0m│ %d.%d.%d\n", LINUX_VERSION_MAJOR, LINUX_VERSION_PATCHLEVEL, LINUX_VERSION_SUBLEVEL);
   printf("├────────┤\n");
   printf("│\x1b[36m colors \x1b[0m│ \x1b[41m  \x1b[42m  \x1b[43m  \x1b[44m  \x1b[45m  \x1b[46m  \x1b[0m\n");
   printf("└────────┘\n");
   return 0;
}
