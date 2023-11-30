#include <stdio.h>

int Cal_Digit(int N, char digit[]);

int main() {
    int N, num, i;
    char digit[20];

    scanf("%d", &N);
    num = Cal_Digit(N, digit);

    printf("%d\n", num);

    for (i = 0; i < num; i++) printf(" %c", digit[i]);
    printf("\n");

    return 0;
}

/* 你的代码将被嵌在这里 */
int Cal_Digit(int N, char digit[]) {
    int num = 0;
    if (N == 0) {
        digit[num++] = '0';
    }
    if (N < 0) {
        N = -N;
    }

    while (N != 0) {
        digit[num++] = N % 10 + '0';
        N /= 10;
    }
    return num;
}