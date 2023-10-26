#include <stdio.h>
#define MAXN 80

int main(void)
{
    char target, a[MAXN], enter;
    scanf("%c\n", &target);
    int i = 0, index = 0, j, indicator = 0;

    // input
    do
    {
        enter = getchar();
        a[i] = enter;
        i++;
    } while (enter != '\n');

    // search for the target
    for (j = i; j >= 0; j--)
    {
        if (target == a[j])
        {
            index = j;
            indicator = 1;
            break;
        }
    }

    // output
    if (indicator == 1)
        printf("index = %d", index);
    else
        printf("Not Found");
    return 0;
}