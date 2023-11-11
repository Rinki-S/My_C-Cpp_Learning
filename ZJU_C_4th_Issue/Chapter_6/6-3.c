#include <stdio.h>

int main(void)
{
    char ch;
    ch = getchar();
    while (ch != '\n')
    {
        if (ch >= 'a' && ch < 'z')
            ch = ch - 'a' + 'B';
        else if (ch >= 'A' && ch < 'Z')
            ch = ch - 'A' + 'b';
        else if (ch == 'z')
            ch = 'A';
        else if (ch == 'Z')
            ch = 'a';
        putchar(ch);
        ch = getchar();
    }
    return 0;
}