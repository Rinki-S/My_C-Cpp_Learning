#include <stdio.h>
int main(void)
{
    int n, i;
    float a = 1.0;
    float b = 1.0;
    float f = 1.0;
    float sum;
    sum = 0.0;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        sum = sum + f * (a / b);
        a += 1.0;
        b += 2.0;
        f = f * (-1.0);
    }
    printf("%.3f", sum);
    return 0;
}