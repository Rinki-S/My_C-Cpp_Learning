#include <stdio.h>
#define MAXN 80

int main(void)
{
    int i = 0;
    char a[MAXN], enter;

    // input
    while (enter != '\n')
    {
        enter = getchar();
        a[i] = enter;
        i++;
    }
    i -= 2;

    // switch
    char b[i];
    for (int j = 0; j <= i; j++)
    {
        b[i - j] = a[j];
    }

    // output
    for (int j = 0; j <= i; j++)
    {
        printf("%c", b[j]);
    }

    return 0;
}