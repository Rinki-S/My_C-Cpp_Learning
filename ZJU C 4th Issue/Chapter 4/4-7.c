#include <stdio.h>

int main(void)
{
    int n, i;
    double e = 0, fact = 1;
    scanf("%d", &n);
    for (i = 1; i <= n + 1; i++)
    {
        e = e + 1.0 / fact;
        fact = fact * i;
    }
    printf("%.8lf", e);
    return 0;
}