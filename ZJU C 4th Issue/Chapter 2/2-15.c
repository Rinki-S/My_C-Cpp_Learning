#include <stdio.h>
int main(void)
{
    int denominator, flag, i, n;
    double item, sum;
    scanf("%d", &n);
    flag = 1;
    denominator = 1;
    item = 1.0;
    sum = 0;
    for (i = 1; i <= n; i++)
    {
        sum = sum + item;
        flag = -flag;
        denominator = denominator + 3;
        item = flag * 1.0 / denominator;
    }
    printf("sum = %.3f", sum);

    return 0;
}