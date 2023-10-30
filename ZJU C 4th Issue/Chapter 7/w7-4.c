#include <stdio.h>

int main(void)
{
    int m, n;
    scanf("%d %d", &m, &n);
    int a[m][n];
    int sum = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            sum += a[i][j];
        }
        printf("%d\n", sum);
        sum = 0;
    }
    return 0;
}