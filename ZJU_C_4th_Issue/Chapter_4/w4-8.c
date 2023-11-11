#include <stdio.h>

int main(void)
{
    double m, n, sum, temp;
    int i;
    scanf("%lf %lf", &m, &n);
    if (n == 0)
    {
        temp = 0.0;
        sum = 0.0;
    }
    else if (n == 1)
    {
        temp = m;
        sum = m;
    }
    else
    {
        sum = m;
        temp = m;
        for (i = 1; i < n; i++)
        {
            sum = sum + temp;
            temp /= 2;
        }
    }
    printf("%.1lf %.1lf", sum, temp / 2);
    return 0;
}