#include <stdio.h>
#include <math.h>

int is_prime(int n)
{
    if (n <= 1)
        return 0;
    int sqr = (int)sqrt(1.0 * n);
    for (int i = 2; i <= sqr; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int n, count = 0;
    scanf("%d", &n);
    for (int i = 2; i <= n - i; i++)
    {
        if (is_prime(i) && is_prime(n - i))
        {
            count++;
        }
    }
    printf("%d=%d+%d", n, i, n - i);
    return 0;
}
