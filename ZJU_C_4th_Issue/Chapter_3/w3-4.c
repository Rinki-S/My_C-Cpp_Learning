#include <stdio.h>
int main(void)
{
    int count, score, i, a = 0, b = 0, c = 0, d = 0, e = 0;
    scanf("%d", &count);
    for (i = 1; i <= count; i++)
    {
        scanf("%d", &score);
        switch (score / 10)
        {
        case 10:
        case 9:
            a++;
            break;
        case 8:
            b++;
            break;
        case 7:
            c++;
            break;
        case 6:
            d++;
            break;
        default:
            e++;
            break;
        }
    }
    printf("%d %d %d %d %d", a, b, c, d, e);
    return 0;
}