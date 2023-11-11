#include <stdio.h>
#include <math.h>

int main(void)
{
    int i, a, n;
    double sum = 0, b, temp = 0;
    scanf("%d %d", &a, &n);
    for (i = 0; i <= (n - 1); i++)
    {
        b = a * pow(10, i);
        temp = temp + b;
        sum += temp;
    }
    printf("s = %.0lf", sum);
    return 0;
}