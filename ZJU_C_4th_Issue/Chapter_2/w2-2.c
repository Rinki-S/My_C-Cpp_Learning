#include <stdio.h>
int main(void)
{
    int usage;
    float cost;
    scanf("%d", &usage);
    if (usage >= 0)
    {
        if (usage <= 50)
        {
            cost = 0.53 * usage;
        }
        else
        {
            cost = 0.53 * 50 + 0.58 * (usage - 50.00);
        }
        printf("cost = %.2f", cost);
    }
    else
    {
        printf("Invalid Value!");
    }
    return 0;
}