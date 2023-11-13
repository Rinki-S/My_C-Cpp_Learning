#include <stdio.h>

struct contact
{
    char name[10];
    int date;
    char tel[17];
};

int main(void)
{
    int n, index = 0, telindex = 0;
    char ch, telch;
    scanf("%d", &n);
    getchar();
    struct contact c[n];
    for (int i = 0; i < n; i++)
    {
        while ((ch = getchar()) != ' ')
        {
            c[i].name[index] = ch;
            index++;
        }
        c[i].name[index] = '\0';
        index = 0;
        scanf("%d", &c[i].date);
        getchar();
        while ((telch = getchar()) != '\n')
        {
            c[i].tel[telindex] = telch;
            telindex++;
        }
        c[i].tel[telindex] = '\0';
        telindex = 0;
    }
    int min = c[0].date;
    int date_sorted[n];
    int temp = 0;
    for (int i = 0; i < n; i++)
    {
        date_sorted[i] = c[i].date;
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (date_sorted[j] > date_sorted[j + 1])
            {
                temp = date_sorted[j + 1];
                date_sorted[j + 1] = date_sorted[j];
                date_sorted[j] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (date_sorted[i] == c[j].date)
            {
                printf("%s %d %s\n", c[j].name, c[j].date, c[j].tel);
            }
        }
    }

    return 0;
}