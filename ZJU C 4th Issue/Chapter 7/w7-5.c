#include <stdio.h>

int main(void)
{
    int n;
    int count = 0;
    scanf("%d", &n);
    int a[n][n];
    int rowmax, columnmin;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            rowmax = columnmin = a[i][j];
            for (int k = 0; k < n; k++)
            {
                if (a[i][k] > rowmax)
                {
                    rowmax = a[i][k];
                }
            }
            for (int l = 0; l < n; l++)
            {
                if (a[l][j] < columnmin)
                {
                    columnmin = a[l][j];
                }
            }
            if (a[i][j] == rowmax && a[i][j] == columnmin)
            {
                printf("%d %d\n", i, j);
                count++;
            }
        }
    }
    if (count == 0)
    {
        printf("NONE");
    }
    return 0;
}