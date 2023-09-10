#include <stdio.h>
#include <stdlib.h>

int main(void){
    printf("\x1b[31muser:\x1b[0m ");
    printf(getenv("USER"));
    printf("\n\x1b[32msh: \x1b[0m");
    printf(getenv("SHELL"));
    printf("\n\x1b[33mterm:\x1b[0m ");
    printf(getenv("TERM"));
    printf("\n\x1b[34mlocale:\x1b[0m ");
    printf(getenv("LANG"));
    printf("\n\x1b[35mcolors: \x1b[31m▅▅\x1b[32m▅▅\x1b[33m▅▅\x1b[34m▅▅\x1b[35m▅▅\x1b[0m\n");
    return 0;
}
