#include <stdio.h>
#include <math.h>

int search(int n);

int main()
{
    int number;

    scanf("%d", &number);
    printf("count=%d\n", search(number));

    return 0;
}

/* 你的代码将被嵌在这里 */
int if_power(int n)
{
    int store[1000];
    int base = 1;
    for (int i = 0; i < 1000; i++)
    {
        store[i] = 0;
    }
    while ((base * base) < 1000)
    {
        store[(base * base)] = 1;
        base++;
    }
    return store[n];
}

int same(int n)
{
    int h, t, g;
    h = n / 100;
    n %= 100;
    t = n / 10;
    n %= 10;
    g = n;
    int count = 0;
    if (h == t)
    {
        count++;
    }
    if (t == g)
    {
        count++;
    }
    if (h == g)
    {
        count++;
    }
    if (count == 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int search(int n)
{
    int count = 0;
    for (int i = 101; i <= n; i++)
    {
        if (if_power(i) && same(i))
        {
            count++;
        }
    }
    return count;
}