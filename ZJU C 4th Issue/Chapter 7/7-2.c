#include <stdio.h>

int main(void)
{
    int n, max, i;
    scanf("%d\n", &n);
    int a[n];
    scanf("%d", &a[0]);
    max = a[0];
    for (i = 1; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] >= max)
            max = a[i];
    }
    printf("%d ", max);
    for (i = 0; i < n; i++)
    {
        if (max == a[i])
        {
            printf("%d", i);
            break;
        }
    }
}