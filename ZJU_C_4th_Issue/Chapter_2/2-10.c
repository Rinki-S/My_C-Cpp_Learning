#include <stdio.h>
int main(void)
{
    float x, f;
    scanf("%f", &x);
    if (x == 0)
    {
        f = 0;
    }
    else
    {
        f = 1 / x;
    }
    printf("f(%.1f) = %.1f", x, f);
    return 0;
}