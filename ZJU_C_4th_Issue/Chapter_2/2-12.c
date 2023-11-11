#include <stdio.h>
int main(void)
{
    int lower, upper, f;
    float c;
    scanf("%d %d", &lower, &upper);
    if (lower <= upper)
    {
        printf("fahr celsius\n");
        for (f = lower; f <= upper; f += 2)
        {
            c = 5.0 * (f - 32.0) / 9.0;
            printf("%d%6.1f\n", f, c);
        }
    }
    else
    {
        printf("Invalid.");
    }
    return 0;
}