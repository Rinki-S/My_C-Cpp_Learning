#include <stdio.h>
#include <math.h>
int main(void)
{
    double x1, x2, x3, y1, y2, y3;
    double a, b, c, l, aa, p;
    scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3);
    aa = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
    b = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));
    c = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
    if (aa + b <= c || aa + c <= b || b + c <= aa)
    {
        printf("Impossible");
    }
    else
    {
        l = aa + b + c;
        p = l / 2.0;
        a = sqrt(p * (p - aa) * (p - b) * (p - c));
        printf("L = %.2lf, A = %.2lf", l, a);
    }
    return 0;
}