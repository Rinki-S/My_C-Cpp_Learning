#include <stdio.h>
#include <math.h>
int main(void)
{
    float mile, cost;
    int eta, n;
    scanf("%f %d", &mile, &eta);
    if (mile <= 3)
    {
        cost = 10.0;
    }
    else
    {
        cost = 10.0 + (mile - 3.0) * 2.0;
    }
    if (mile > 10)
    {
        cost = cost + (mile - 10.0) * 1.0;
    }
    if (eta >= 5)
    {
        n = eta / 5;
        cost = cost + 2.0 * n;
    }
    printf("%.0f", round(cost));
    return 0;
}