#include <stdio.h>

int reverse(int number);

int main()
{
    int n;

    scanf("%d", &n);
    printf("%d\n", reverse(n));

    return 0;
}

/* 你的代码将被嵌在这里 */
int power(int x, int y)
{
    int i;
    int res = 1;
    for (i = 1; i <= y; i++)
    {
        res *= x;
    }
    return res;
}

int reverse(int number)
{
    int i, digit = 1, temp, reverse = 0, a, flag = 0;
    if (number < 0)
    {
        flag = 1;
        number *= -1;
    }
    temp = number;
    while (temp / 10 > 0)
    {
        digit++;
        temp /= 10;
    }
    for (i = digit - 1; i >= 0; i--)
    {
        a = number % 10;
        if (a == 0)
            reverse *= 10;
        else
            reverse += power(10,i) * a;
        number /= 10;
    }
    if (flag == 1)
        reverse *= -1;
    return reverse;
}