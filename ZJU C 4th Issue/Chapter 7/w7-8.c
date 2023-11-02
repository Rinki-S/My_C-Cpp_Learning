#include <stdio.h>
#include <math.h>
#include <string.h>
#define MAXN 100

long convert(char s[])
{
    int n = strlen(s);
    long sum = 0;
    long base = 1;
    for (int i = n - 1; i >= 0; i--)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            sum += (s[i] - '0') * base;
        }
        else
        {
            sum += (s[i] - 'a' + 10) * base;
        }
        base *= 16;
    }
    return sum;
}

int main(void)
{
    char a[MAXN], enter;
    int i = 0;
    int n = 0;
    int positive = 0;

    while ((enter = getchar()) != '\n')
    {
        if (enter >= 'A' && enter <= 'Z')
        {
            enter += 32;
        }
        a[n] = enter;
        n++;
    }

    while (a[i] != 'x' &&
           !(a[i] >= '0' && a[i] <= '9' || a[i] >= 'a' && a[i] <= 'f'))
    {
        if (a[i] == '#')
            break;
        i++;
    }
    if (a[i] == '#')
    {
        printf("0\n");
        return 0;
    }
    if (i == 0)
        positive = 1;
    else
    {
        if (a[i - 1] == '+')
            positive = 1;
        else
            positive = 0;
    }
    char t[MAXN];
    int j = 0;
    if (a[i] == 'x')
        i++;
    for (; i < n; i++)
    {
        if (a[i] >= '0' && a[i] <= '9' || a[i] >= 'a' && a[i] <= 'f')
        {
            t[j] = a[i];
            j++;
        }
    }
    long sum = convert(t);
    if (positive)
        printf("%ld\n", sum);
    else
        printf("%ld", -sum);

    return 0;
}