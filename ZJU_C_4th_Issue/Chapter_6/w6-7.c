#include <stdio.h>

int main()
{
    int i, j;
    char ch;
    scanf("%d%c%d", &i, &ch, &j);
    while (1)
    {
        if (ch == '+')
            i += j;
        else if (ch == '-')
            i -= j;
        else if (ch == '*')
            i *= j;
        else if (ch == '/')
        {
            if (j == 0)
            {
                printf("ERROR\n");
                return 0;
            }
            else
                i /= j;
        }
        else if (ch == '=')
            break;
        else
        {
            printf("ERROR\n");
            return 0;
        }
        ch = getchar();
        if (ch == '=')
            break;
        scanf("%d", &j);
    }
    printf("%d\n", i);
    return 0;
}