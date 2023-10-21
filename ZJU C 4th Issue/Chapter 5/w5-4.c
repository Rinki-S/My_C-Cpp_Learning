#include <stdio.h>
#include <math.h>

int prime(int p);
int PrimeSum(int m, int n);

int main()
{
    int m, n, p;

    scanf("%d %d", &m, &n);
    printf("Sum of ( ");
    for (p = m; p <= n; p++)
    {
        if (prime(p) != 0)
            printf("%d ", p);
    }
    printf(") = %d\n", PrimeSum(m, n));

    return 0;
}

/* 你的代码将被嵌在这里 */
int prime(int p)
{
    int flag, i;
    if (p == 1)
        flag = 0;
    if (p == 2)
        flag = 1;
    if (p > 2)
    {
        for (i = 2; i < p; i++)
        {
            if (p % i == 0)
            {
                flag = 0;
                break;
            }
            else
            {
                flag = 1;
            }
        }
    }
    return flag;
}

int PrimeSum(int m, int n)
{
    int j, sum = 0;
    for (j = m; j <= n; j++)
    {
        if (prime(j) == 1)
            sum += j;
    }
    return sum;
}