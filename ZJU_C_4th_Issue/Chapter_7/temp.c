#include <stdio.h>

int main()
{
    int m, n, i, j;

    // read input values
    scanf("%d %d", &m, &n);

    // read input matrix
    int a[n][n];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // shift matrix right by m columns
    int b[n][n];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            int new_j = (j + m) % n;
            b[i][new_j] = a[i][j];
        }
    }

    // print output matrix
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }

    return 0;
}