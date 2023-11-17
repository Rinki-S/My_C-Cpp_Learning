#include <stdio.h>

char *getmonth(int n);

int main()
{
    int n;
    char *s;

    scanf("%d", &n);
    s = getmonth(n);
    if (s == NULL)
        printf("wrong input!\n");
    else
        printf("%s\n", s);

    return 0;
}

/* 你的代码将被嵌在这里 */

char *getmonth(int n)
{
    static char month[10];
    switch (n)
    {
        case 1: strcpy(month, "January"); break;
        case 2: strcpy(month, "February"); break;
        case 3: strcpy(month, "March"); break;
        case 4: strcpy(month, "April"); break;
        case 5: strcpy(month, "May"); break;
        case 6: strcpy(month, "June"); break;
        case 7: strcpy(month, "July"); break;
        case 8: strcpy(month, "August"); break;
        case 9: strcpy(month, "September"); break;
        case 10: strcpy(month, "October"); break;
        case 11: strcpy(month, "November"); break;
        case 12: strcpy(month, "December"); break;
        default: return NULL;
    }
    return month;
}
