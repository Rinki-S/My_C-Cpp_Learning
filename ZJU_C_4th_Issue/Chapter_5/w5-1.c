#include <stdio.h>

int sign(int x);

int main()
{
    int x;

    scanf("%d", &x);
    printf("sign(%d) = %d\n", x, sign(x));

    return 0;
}

/* 你的代码将被嵌在这里 */
int sign(int x)
{
    int sign;
    if (x > 0)
        sign = 1;
    if (x == 0)
        sign = 0;
    if (x < 0)
        sign = -1;
    return sign;
}