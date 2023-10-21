#include <stdio.h>
int fact(int n)
{
    int i, result;
    result = 1;
    for (i = 1; i <= n; i++)
    {
        result = result * i;
    }
    return result;
}
int main(void)
{
    int a, count, sum;
    scanf("%d", &count);
    for (a = 1; a <= count; a++)
    {
        sum = sum + fact(a);
    }
    printf("%d", sum);
    return 0;
}