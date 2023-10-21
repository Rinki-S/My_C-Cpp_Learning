#include <stdio.h>

int main(void)
{
    double num = 2, den = 1, temp;
    int i, n;
    double sum = 0;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        sum = sum + (double)num / (double)den;
        temp = num;
        num = num + den;
        den = temp;
    }
    printf("%.2lf", sum);
    return 0;
}