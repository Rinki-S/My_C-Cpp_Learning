#include <stdio.h>

int main(void)
{
    int i, n, input, min;
    scanf("%d", &n);
    scanf("%d", &min);
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &input);
        if (input < min)
        {
            min = input;
        }
    }
    printf("min = %d", min);
    return 0;
}