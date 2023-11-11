#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    int *pscore;
    double max, min, sum = 0, average;
    pscore = (int *)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++)
    {
        scanf("%d", pscore + i);
    }
    max = *pscore;
    min = *pscore;
    for (int i = 0; i < n; i++)
    {
        if (*(pscore + i) > max)
            max = *(pscore + i);
        if (*(pscore + i) < min)
            min = *(pscore + i);
    }
    for (int i = 0; i < n; i++)
    {
        average += *(pscore + i);
    }
    average /= n;
    printf("average = %.2lf\nmax = %.2lf\nmin = %.2lf\n", average, max, min);
    return 0;
}