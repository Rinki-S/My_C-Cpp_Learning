#include <stdio.h>
#include <math.h>

int prime(int p);
void Goldbach(int n);

int main()
{
    int m, n, i, cnt;

    scanf("%d %d", &m, &n);
    if (prime(m) != 0)
        printf("%d is a prime number\n", m);
    if (m < 6)
        m = 6;
    if (m % 2)
        m++;
    cnt = 0;
    for (i = m; i <= n; i += 2)
    {
        Goldbach(i);
        cnt++;
        if (cnt % 5)
            printf(", ");
        else
            printf("\n");
    }

    return 0;
}

/* 你的代码将被嵌在这里 */
int prime(int p)
{
    if (p == 1)
        return 0;
    int i, count = 0;
    for (i = 2; i < p; i++)
    {
        if (p % i == 0)
            count++;
    }
    if (count == 0)
        return 1;
    else
        return 0;
}

void Goldbach(int n)
{
    int i, j;
    for (i = 1; i <= n / 2; i++)
    {
        j = n - i;
        if (prime(i) && prime(j))
        {
            printf("%d=%d+%d", n, i, j);
            break;
        }
    }
}