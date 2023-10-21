#include <stdio.h>

int max(int a, int b)
{
    int max, temp;
    int i = 1;
    if (a > b)
    {
        temp = b;
        b = a;
        a = temp;
    }
    while ((a * i) % b != 0)
    {
        i++;
    }
    max = a * i;
    return max;
}

int min(int c, int d)
{
    int min, tempp;
    if (c < d)
    {
        tempp = c;
        c = d;
        d = tempp;
    }
    int j = d;
    while (c % j != 0 || d % j != 0)
    {
        j--;
    }
    min = j;
    return min;
}

int main(void)
{
    int m, n;
    int miin, maax;
    scanf("%d %d", &m, &n);
    miin = min(m, n);
    maax = max(m, n);
    printf("%d %d\n", miin, maax);
    return 0;
}