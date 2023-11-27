#include <stdio.h>

int Count_Digit(const int N, const int D);

int main() {
    int N, D;

    scanf("%d %d", &N, &D);
    printf("%d\n", Count_Digit(N, D));
    return 0;
}

/* 你的代码将被嵌在这里 */
int Count_Digit(const int N, const int D) {
    int n = N;
    if (n < 0) {
        n = -n;
    }

    int count = 0;
    int number = 0;
    while (n / 10 > 0) {
        number = n % 10;
        if (number == D) {
            count++;
        }
        n /= 10;
    }
    if (n == D) {
        count++;
    }
    return count;
}