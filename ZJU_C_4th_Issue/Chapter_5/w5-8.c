#include <stdio.h>

void hollowPyramid(int n);

int main()
{
    int n;

    scanf("%d", &n);
    hollowPyramid(n);

    return 0;
}

/* 你的代码将被嵌在这里 */
void hollowPyramid(int n)
{
    int i = 1, j, k, countout, countin;
    countout = n - 1;
    countin = -1;
    for (i = 1; i <= n; i++)
    {
        if (i != n)
        {
            for (j = 0; j < countout; j++)
            {
                printf(" ");
            }
            countout--;
            printf("%d", i);
            for (k = 0; k < countin; k++)
            {
                printf(" ");
            }
            countin += 2;
            if (i != 1)
            {
                printf("%d\n", i);
            }
            else
            {
                printf("\n");
            }
        }
        else
        {
            for (i = 1; i <= 1 + 2 * (n - 1); i++)
            {
                printf("%d", n);
            }
        }
    }
}