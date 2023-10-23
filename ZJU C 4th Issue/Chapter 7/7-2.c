#include <stdio.h>

int main(void)
{
    int n, min, i;
    scanf("%d\n", &n);
    int a[n];
    scanf("%d", &a[0]);
    min = a[0];
    for (i = 1; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] <= min)
            min = a[i];
    }
    printf("%d ", min);
    for (i = 0; i < n; i++)
    {
        if (min == a[i])
        {
            printf("%d", i);
            break;
        }
    }
}