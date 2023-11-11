#include <stdio.h>

int CountDigit(int number, int digit);

int main()
{
    int number, digit;

    scanf("%d %d", &number, &digit);
    printf("Number of digit %d in %d: %d\n", digit, number, CountDigit(number, digit));

    return 0;
}

/* 你的代码将被嵌在这里 */
int CountDigit(int number, int digit)
{
    int temp, count = 0;
    if (number < 0)
        number *= -1;
    while (number / 10 > 0)
    {
        temp = number - (number / 10) * 10;
        if (temp == digit)
            count++;
        number /= 10;
    }
    if (number == digit)
        count++;
    return count;
}