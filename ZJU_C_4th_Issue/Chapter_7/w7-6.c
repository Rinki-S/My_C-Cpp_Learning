#include <stdio.h>
#define MAXN 80

int main(void)
{
    char a[MAXN], enter;
    int count = 0, i = 0;
    while ((enter = getchar()) != '\n')
    {
        a[i] = enter;
        i++;
    }
    for (int j = 0; j <= i; j++)
    {
        if (a[j] > 'A' && a[j] <= 'Z' && a[j] != 'E' && a[j] != 'I' &&
            a[j] != 'O' && a[j] != 'U')
        {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}