#include <stdio.h>
int prime(int n);
int main(void)
{
    int m, n, i, count = 0, sum = 0;
    scanf("%d %d", &m, &n);
    for (i = m; i <= n; i++)
    {
        if (prime(i) != 0)
        {
            count++;
            sum = sum + i;
        }
    }
    printf("%d %d", count, sum);
    return 0;
}
int prime(int n)
{
    int j, indicator = 1;
    if (n == 1)
    {
        indicator = 0;
        return indicator;
    }
    for (j = 2; j < n; j++)
    {
        if ((n == 1) || (n != 2 && n % j == 0))
        {
            indicator = 0;
            return indicator;
        }
    }
    return indicator;
}