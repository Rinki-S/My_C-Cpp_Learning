#include <stdio.h>

void dectobin(int n);

int main()
{
    int n;

    scanf("%d", &n);
    dectobin(n);

    return 0;
}

/* 你的代码将被嵌在这里 */
void dectobin(int n)
{
    static int isFirstCall = 1;
    if (n == 0)
    {
        if (isFirstCall)
        {
            printf("0");
        }
        return;
    }
    isFirstCall = 0;
    dectobin(n / 2);
    printf("%d", n % 2);
}