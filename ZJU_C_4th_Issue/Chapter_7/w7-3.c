#include <stdio.h>

int main(void)
{
    // input t
    int t, n;
    scanf("%d", &t);
    int columncount = 0, rowcount = 0;
    int flag = 0;

    for (int i = 0; i < t; i++)
    {
        scanf("%d", &n);
        int a[n][n];
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                scanf("%d", &a[j][k]);
            }
        }
        columncount = rowcount = n - 1;
        for (int j = rowcount; j > 0; j--)
        {
            for (int k = 0; k < columncount; k++)
            {
                if (a[j][k] != 0)
                {
                    flag++;
                }
            }
            columncount--;
        }
        if (flag == 0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
            flag = 0;
        }
    }

    return 0;
}