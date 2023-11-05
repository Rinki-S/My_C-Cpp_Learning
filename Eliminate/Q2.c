#include <stdio.h>

int main(void)
{
    int n, j = 0;
    int tyre, date;
    char staff[7], temp;
    int score = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d ", &tyre, &date);
        while ((temp = getchar()) != '\n')
        {
            staff[j] = temp;
            j++;
        }
        j = 0;
        if (tyre == 1)
            score++;
        else
            score += 2;
        if (date == 6)
            score += 2;
        if (staff[0] == 'y')
            score += 2;
        else
            score++;
        if (score > 5)
            printf("win\n");
        else if (score == 5)
            printf("draw\n");
        else
            printf("lose\n");
        score = 0;
    }
    return 0;
}