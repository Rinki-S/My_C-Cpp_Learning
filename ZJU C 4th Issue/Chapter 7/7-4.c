#include <stdio.h>

int main(void)
{
    int i, j, k, indicator = 0, digit;
    int x, count = 0, flag = 0;
    scanf("%d", &x);
    int a[x];
    for (i = 0; i < x; i++)
    {
        scanf("%d", &a[i]);
    }
    int y;
    scanf("%d", &y);
    int b[y];
    for (i = 0; i < y; i++)
    {
        scanf("%d", &b[i]);
    }
    int c[x + y];
    for (i = 0; i < x; i++)
    {
        for (j = 0; j < y; j++)
        {
            if (a[i] == b[j])
            {
                count++;
            }
        }
        if (count == 0)
        {
            c[flag] = a[i];
            flag++;
        }
        count = 0;
    }
    for (i = 0; i < y; i++)
    {
        for (j = 0; j < x; j++)
        {
            if (b[i] == a[j])
            {
                count++;
            }
        }
        if (count == 0)
        {
            c[flag] = b[i];
            flag++;
        }
        count = 0;
    }
    flag -= 1;
    digit = flag;
    for (i = 0; i < flag; i++)
    {
        for (j = i + 1; j <= flag; j++)
        {
            if (c[i] == c[j])
            {
                for (k = j; k <= flag; k++)
                {
                    c[k] = c[k + 1];
                }
                flag--;
            }
        }
    }
    for (i = 0; i <= flag; i++)
    {
        if (i != 0)
            printf(" ");
        printf("%d", c[i]);
    }
    return 0;
}