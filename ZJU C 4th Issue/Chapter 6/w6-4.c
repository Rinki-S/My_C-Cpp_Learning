#include <stdio.h>

int fib(int n);
void PrintFN(int m, int n);

int main()
{
    int m, n, t;
    scanf("%d %d %d", &m, &n, &t);
    printf("fib(%d) = %d\n", t, fib(t));
    PrintFN(m, n);

    return 0;
}

/* 你的代码将被嵌在这里 */
int fib(int n)
{
    int a = 1, b = 1, c, i;

    if (n == 1 || n == 2)
        return 1;

    for (i = 3; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }

    return b;
}

void PrintFN(int m, int n)
{
    // 定义 flagup 和 flagdown 用于规定查找斐波那契数的范围
    int i, j, flagdown = 1, flagup = 1, count = 0;
    if (m > 0)
    {
        while (fib(flagdown) < m) flagdown++;
        while (fib(flagup) <= n) flagup++;
    }
    else
    {
        flagdown = 1;
        while (fib(flagup) <= n) flagup++;
    }
    for (j = flagdown; j < flagup; j++)
    {
        if (count != 0)
            printf(" ");
        printf("%d", fib(j));
        count++;
    }

    if (count == 0)
        printf("No Fibonacci number");
}