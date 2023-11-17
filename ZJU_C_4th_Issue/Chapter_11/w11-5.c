#include <stdio.h>

#define MAXS 10

char *match(char *s, char ch1, char ch2);

int main()
{
    char str[MAXS], ch_start, ch_end, *p;

    scanf("%s\n", str);
    scanf("%c %c", &ch_start, &ch_end);
    p = match(str, ch_start, ch_end);
    printf("%s\n", p);

    return 0;
}

/* 你的代码将被嵌在这里 */

char *match(char *s, char ch1, char ch2)
{
    char *ps = s;
    char *pe = s;
    while (*ps && *ps != ch1)
    {
        ps++;
    }
    if (*ps == '\0')
    {
        printf("\n");
        return ps;
    }
    while (*pe && *pe != ch2)
    {
        pe++;
    }
    if (*pe == '\0')
    {
        printf("%s\n", ps);
        return ps;
    }
    int len = pe - ps;
    char *tmp = ps;
    while (tmp != pe)
    {
        printf("%c", *tmp);
        tmp++;
    }
    printf("%c\n", *tmp);
    return ps;
}
