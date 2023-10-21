#include <stdio.h>
#include <math.h>

double factorial(int n);
int main(void)
{
    double x, a = 1, e = 0;
    int flag = 0;
    const double EPS = 0.00001;
    scanf("%lf", &x);
    do
    {
        a = pow(x, flag) / factorial(flag);
        e = e + a;
        flag++;
    } while (a >= EPS);
    printf("%.4lf", e);
    return 0;
}

double factorial(int n)
{
    int i;
    double result = 1;
    for (i = 1; i <= n; i++)
    {
        result = result * i;
    }
    return result;
}