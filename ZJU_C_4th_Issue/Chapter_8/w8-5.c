#include <stdio.h>
#define MAXN 20

void strmcpy(char *t, int m, char *s);
void ReadString(char s[]); /* 由裁判实现，略去不表 */

int main()
{
    char t[MAXN], s[MAXN];
    int m;

    scanf("%d\n", &m);
    ReadString(t);
    strmcpy(t, m, s);
    printf("%s\n", s);

    return 0;
}

/* 你的代码将被嵌在这里 */
void strmcpy(char *t, int m, char *s)
{
    int length = 0;
    char ch = t[0];
    int chind = 0;
    while (ch != '\0')
    {
        chind++;
        ch = t[chind];
        length++;
    }
    int index = 0;
    if (m > length)
    {
        s[0] = '\0';
        return;
    }
    else
    {
        for (int i = m - 1; i < length; i++)
        {
            s[index] = t[i];
            index++;
        }
        s[index] = '\0';
    }
}