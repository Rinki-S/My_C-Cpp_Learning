#include <stdio.h>

int main(void)
{
    int n, i;
    scanf("%d", &n);
    int a[n], b[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        b[i] = a[n - i - 1];
    }
    for (i = 0; i < n; i++)
    {
        if (i != 0)
            printf(" ");
        printf("%d", b[i]);
    }
    return 0;
}