#include <stdio.h>
#include <math.h>
int main(void)
{
    int n, i;
    double sum;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        sum = sum + sqrt(i);
    }
    printf("sum = %.2f", sum);
    return 0;
}