#include <stdio.h>
struct vector
{
    double x;
    double y;
};

int main(void)
{
    struct vector a, b, sum;
    scanf("%lf %lf %lf %lf", &a.x, &a.y, &b.x, &b.y);
    sum.x = a.x + b.x;
    sum.y = a.y + b.y;
    if (sum.x < 0.05 && sum.x > -0.05)
    {
        sum.x = 0.0;
    }
    if (sum.y < 0.05 && sum.y > -0.05)
    {
        sum.y = 0.0;
    }
    printf("(%.1lf, %.1lf)", sum.x, sum.y);
    return 0;
}