#include <stdio.h>

int main(void)
{
    int i, n, count = 1;
    scanf("%d", &n);
    for (i = 1; i < n; i++)
    {
        count = (count + 1) * 2;
    }
    printf("%d", count);
    return 0;
}