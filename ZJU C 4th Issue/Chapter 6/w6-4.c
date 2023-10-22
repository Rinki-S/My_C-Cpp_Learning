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
    int a = 1, b = 1, temp, i;
    for (i = 1; i <= n; i++)
    {
        temp = b;
        b += a;
        a = temp;
    }
    return a;
}

void PrintFN(int m, int n)
{
    int i, j, count = 0;
    for (i = m; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (fib(j) == i)
            {
                printf("%d ", j);
                count++;
                break;
            }
        }
    }
    if (count == 0)
        printf("No Fibonacci number");
}