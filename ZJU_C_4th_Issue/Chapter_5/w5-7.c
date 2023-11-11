#include <stdio.h>
#include <math.h>

double funcos(double e, double x);

int main()
{
    double e, x;

    scanf("%lf %lf", &e, &x);
    printf("cos(%.2f) = %.6f\n", x, funcos(e, x));

    return 0;
}

/* 你的代码将被嵌在这里 */
double fact(double m)
{
    double i;
    double res = 1.0;
    for (i = 1; i <= m; i++)
    {
        res *= i;
    }
    return res;
}

double funcos(double e, double x)
{
    int flag = 0, symbol = 1;
    double sign, cos = 0;
    sign = pow(x, flag) / fact(flag);
    do
    {
        sign = pow(x, flag) / fact(flag);
        cos += symbol * sign;
        flag += 2;
        symbol *= -1;
    } while (fabs(sign) >= e);
    return cos;
}