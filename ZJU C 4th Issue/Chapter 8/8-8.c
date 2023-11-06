#include <stdio.h>
#include <string.h>

#define MAXS 10

void Shift(char s[]);

void GetString(char s[]); /* 实现细节在此不表 */

int main()
{
    char s[MAXS];

    GetString(s);
    Shift(s);
    printf("%s\n", s);

    return 0;
}

/* 你的代码将被嵌在这里 */

void Shift(char s[])
{
    char temp[3];
    int n = strlen(s);
    int j = 0;
    for (int i = 0; i < 3; i++)
    {
        temp[i] = s[i];
    }
    for (int i = 3; i < n; i++)
    {
        s[i - 3] = s[i];
    }
    for (int i = n - 3; i < n; i++)
    {
        s[i] = temp[j];
        j++;
    }
}
