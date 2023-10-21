#include <stdio.h>

int narcissistic(int number);
void PrintN(int m, int n);

int main()
{
    int m, n;

    scanf("%d %d", &m, &n);
    if (narcissistic(m))
        printf("%d is a narcissistic number\n", m);
    PrintN(m, n);
    if (narcissistic(n))
        printf("%d is a narcissistic number\n", n);

    return 0;
}

/* 你的代码将被嵌在这里 */
int narcissistic(int number)
{
    int i, digit, sum = 0;
    i = number;
    while (number > 0)
    {
        digit = number % 10;
        sum += digit * digit * digit;
        number /= 10;
    }
    if (sum == i)
        return 1;
    else
        return 0;
}

void PrintN(int m, int n)
{
    int j;
    for (j = m + 1; j < n; j++)
    {
        if (narcissistic(j) == 1)
            printf("%d\n", j);
    }
}