#include <stdio.h>

int main(void)
{
    int n, flag = 0, temp = 0;
    scanf("%d", &n);
    int a[n], b[n], max;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = flag; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (a[j] > a[flag])
            {
                temp = a[flag];
                a[flag] = a[j];
                a[j] = temp;
            }
        }
        flag++;
    }
    for (int i = 0; i < n; i++)
    {
        if (i != 0)
        {
            printf(" ");
        }
        printf("%d", a[i]);
    }

    return 0;
}