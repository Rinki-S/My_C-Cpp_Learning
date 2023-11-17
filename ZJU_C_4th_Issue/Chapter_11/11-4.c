#include <stdio.h>
char *match(char *s, char ch);

int main(void)
{
    char ch, str[80], *p = NULL;

    scanf("%s", str);
    getchar();      /* 跳过输入字符串和输入字符之间的分隔符 */
    ch = getchar(); /* 输入一个字符 */
    p = match(str, ch); /* 调用函数match() */
    if (p != NULL)
    { /* 找到字符ch */
        printf("%s\n", p);
    }
    else
    {
        printf("Not Found.\n");
    }

    return 0;
}

/* 请在这里填写答案 */

char *match(char *s, char ch)
{
    static int target_index = 0;
    int count = 0;
    int length = strlen(s);
    for (int i = 0; i < length; i++)
    {
        if (s[i] == ch)
        {
            target_index = i;
            count++;
        }
    }
    if (count == 0)
        return NULL;
    return &s[target_index];
}
