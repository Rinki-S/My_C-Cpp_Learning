#include <stdio.h>

int main(void)
{
    int i, n, sum = 0, minus = 0, line = -1;
    scanf("%d", &n);
    int a[n * n];
    for (i = 0; i < n * n; i++)
    {
        scanf("%d", &a[i]);
        sum += a[i];
    }
    if (n != 2)
    {
        for (i = 0; i < n; i++)
        {
            minus += n - 1;
            sum -= a[minus];
        }
        for (i = 0; i < n; i++)
        {
            line += n;
            sum -= a[line];
        }
        for (i = n * n - 1; i > n * n - n - 1; i--)
        {
            sum -= a[i];
        }
        sum += a[n - 1];
        sum += a[n * (n - 1) - 1];
        sum += a[n * n - 1];
        printf("%d", sum);
    }
    else
    {
        printf("%d", a[0]);
    }
    return 0;
}