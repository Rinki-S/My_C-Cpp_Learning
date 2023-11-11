#include <stdio.h>

int main(void)
{
    int n, digit = 0, max = 0, flag = 0;
    scanf("%d", &n);
    int a[n], count[10];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        count[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        while (a[i] / 10 > 0)
        {
            digit = a[i] % 10;
            count[digit]++;
            a[i] /= 10;
        }
        count[a[i]]++;
    }
    max = count[0];
    for (int i = 0; i < 10; i++)
    {
        if (count[i] > max)
        {
            max = count[i];
        }
    }
    printf("%d: ", max);
    for (int i = 0; i < 10; i++)
    {
        if (max == count[i])
        {
            if (flag != 0)
            {
                printf(" ");
            }
            printf("%d", i);
            flag++;
        }
    }
    return 0;
}