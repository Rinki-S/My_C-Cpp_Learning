#include <stdio.h>
int main(void)
{
    double eps, sum = 0.0, a = 1.0, n = 1.0;
    int i = 1;
    scanf("%lf", &eps);
    do {
        a = 1.0 / i;
        sum = sum + n * a;
        i = i + 3;
        n = -n;
    } while (a > eps);
    // while (a > eps)
    // {
    //     a = 1.0 / i;
    //     sum = sum + n * a;
    //     i = i + 3;
    //     n = -n;
    // }
    printf("sum = %.6lf", sum);
    return 0;
}