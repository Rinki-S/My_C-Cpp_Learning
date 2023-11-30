#include "stdio.h"

int if_letter(char a) {
    if (a >= '0' && a <= '9')
        return 1;
    return 0;
}

int main(void) {
    char i;
    i = getchar();
    if (if_letter(i))
        printf("yes");
    else
        printf("no");
    return 0;
}