#include <stdio.h>
int main(void)
{
    int n, i;
    double sum = 0;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        sum = sum + 1.0 / i;
    }
    printf("sum = %.6lf", sum);
    return 0;
}