#include <stdio.h>
#include <math.h>
int main(void)
{
    float x, y;
    scanf("%f", &x);
    if (x >= 0)
    {
        y = sqrt(x);
    }
    else
    {
        y = pow((x + 1), 2) + 2 * x + 1 / x;
    }
    printf("f(%.2f) = %.2f", x, y);
    return 0;
}