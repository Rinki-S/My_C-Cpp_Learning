#include <stdio.h>
int main()
{
    int start = 2000;
    int end, i;
    int count = 0;
    scanf("%d", &end);
    if (end < 2001 || end > 2100)
    {
        printf("Invalid year!");
    }
    else
    {
        for (i = start; i <= end; i += 4)
        {
            if (i % 4 == 0 && i % 100 != 0)
            {
                printf("%d\n", i);
                count++;
            }
        }
        if (count == 0)
        {
            printf("None");
        }
    }
    return 0;
}