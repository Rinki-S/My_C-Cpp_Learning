#include <stdio.h>
#define MAXN 80

int main(void)
{
    char a[MAXN], enter;
    int i = 0;
    while ((enter = getchar()) != '\n')
    {
        a[i] = enter;
        i++;
    }
    for (int j = 0; j < i; j++)
    {
        if (a[j] >= 'A' && a[j] <= 'Z')
        {
            a[j] = 'Z' - (a[j] - 'A');
        }
    }
    for (int j = 0; j < i; j++)
    {
        putchar(a[j]);
    }
    return 0;
}