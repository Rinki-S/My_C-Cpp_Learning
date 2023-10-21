#include <stdio.h>

void CharPyramid(int n, char ch);

int main()
{
    int n;
    char ch;

    scanf("%d %c", &n, &ch);
    CharPyramid(n, ch);

    return 0;
}

/* 请在这里填写答案 */
void CharPyramid(int n, char ch)
{
    int i, j, a = 1, b = n - 1;
    for (i = 1; i <= n; i++)
    {
        for (j = b; j > 0; j--)
        {
            printf(" ");
        }
        for (j = 1; j <= a; j++)
        {
            printf("%c ", ch);
        }
        a++;
        b--;
        printf("\n");
    }
}