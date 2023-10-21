#include <stdio.h>
int main(void)
{
    int random, n, input, count = 1, flag = 0;
    scanf("%d %d", &random, &n);
    while (count <= n)
    {
        scanf("%d", &input);
        if (input < 0)
        {
            break;
        }
        if (input > random)
        {
            printf("Too big\n");
        }
        else if (input < random)
        {
            printf("Too small\n");
        }
        else
        {
            if (count == 1)
            {
                printf("Bingo!\n");
            }
            else if (count > 1 && count <= 3)
            {
                printf("Lucky You!\n");
            }
            else
            {
                printf("Good Guess!\n");
            }
            flag = 1;
            break;
        }
        count++;
    }
    if (flag == 0)
    {
        printf("Game Over\n");
    }
    return 0;
}