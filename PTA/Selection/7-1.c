#include <stdio.h>

int main(void)
{
    int n;
    int score = 0;
    int outstanding = 0, qualified = 0, failed = 0;
    scanf("%d", &n);
    getchar();
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &score);
        if (score >= 85)
            outstanding++;
        else if (score >= 60)
            qualified++;
        else
            failed++;
        // switch (score)
        // {
        //     case score >= 85: outstanding++; break;
        //     case score >= 60 && score < 85: qualified++; break;
        //     default: failed++; break;
        // }
    }
    printf("%d %d %d", outstanding, qualified, failed);
    return 0;
}