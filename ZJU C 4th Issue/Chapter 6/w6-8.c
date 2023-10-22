#include <stdio.h>

int main(void)
{
    int word;
    char ch;
    while (1)
    {
        ch = getchar();
        if (ch != '\n')
        {
            if (ch == ' ')
            {
                word = 0;
            }
            else if (word == 0)
            {
                word = 1;
                if (ch >= 'a' && ch <= 'z')
                    ch = ch - 'a' + 'A';
            }
            printf("%c", ch);
        }
        else
        {
            printf("\n");
            break;
        }
    }
    return 0;
}