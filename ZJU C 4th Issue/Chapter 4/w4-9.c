#include <stdio.h>

int main()
{
    int i, j, n, count = 1, head, row, line;
    scanf("%d", &n);
    head = n - 1;
    row = (n + 1) / 2;
    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= head; j++)
        {
            printf(" ");
        }
        if (head > 0)
        {
            head -= 2;
        }
        for (j = 1; j <= count; j++)
        {
            printf("* ");
        }
        count += 2;
        printf("\n");
    }
    count -= 4;
    head += 2;
    for (i = row - 1; i >= 1; i--)
    {
        for (j = 1; j <= head; j++)
        {
            printf(" ");
        }
        if (head < n - 1)
        {
            head += 2;
        }
        for (j = count; j >= 1; j--)
        {
            printf("* ");
        }
        count -= 2;
        printf("\n");
    }
    return 0;
}