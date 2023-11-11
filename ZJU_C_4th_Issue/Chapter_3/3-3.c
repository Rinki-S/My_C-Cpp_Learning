#include <stdio.h>
int main()
{
    int n, count, i, sum, save;
    float average;
    average = 0.0;
    sum = 0;
    count = 0;
    scanf("%d", &n);
    if (n > 0)
    {
        for (i = 1; i <= n; i++)
        {
            scanf("%d", &save);
            if (save >= 60)
            {
                count++;
            }
            sum = sum + save;
        }
        average = sum / n;
    }
    printf("average = %.1f\ncount = %d", average, count);
    return 0;
}