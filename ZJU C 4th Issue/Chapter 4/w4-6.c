#include <stdio.h>

int power(int a, int b)
{
    int res = 1, i;
    for (i = 0; i < b; i++)
    {
        res *= a;
    }
    return res;
}

int main(void)
{
    int n, i, j, k, sum = 0;
    scanf("%d", &n);
    for (i = power(10, n - 1); i < power(10, n); i++)
    {
        sum = 0;
        j = i;
        while (j > 0)
        {
            k = j % 10;
            sum += power(k, n);
            j /= 10;
        }
        if (sum == i)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}