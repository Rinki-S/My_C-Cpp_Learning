#include <stdio.h>

int main(void)
{
    int amount, fen5 = 0, fen2 = 0, fen1 = 0, count = 0;
    int i, j, k;
    scanf("%d", &amount);
    fen5 = amount / 5;
    fen2 = (amount - 5) / 2;
    fen1 = amount - 5 - 2;
    for (i = fen5; i >= 1; i--)
    {
        for (j = fen2; j >= 1; j--)
        {
            for (k = fen1; k >= 1; k--)
            {
                if (i * 5 + j * 2 + k == amount)
                {
                    printf("fen5:%d, fen2:%d, fen1:%d, total:%d\n", i, j, k, i + j + k);
                    count++;
                }
            }
        }
    }
    printf("count = %d", count);
    return 0;
}