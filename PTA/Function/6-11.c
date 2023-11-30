#include <stdio.h>

int fun(int w);

int main() {
    int m;
    scanf("%d", &m);
    printf("%d\n", fun(m));
    return 0;
}

/* 您的程序将被嵌入在这里 */
int power(int x, int y) {
    int result = 1;
    for (int i = 0; i < y; i++) {
        result *= x;
    }
    return result;
}

int digit(int n) {
    int count = 0;
    while (n != 0) {
        n /= 10;
        count++;
    }
    return count;
}

int fun(int w) {
    int count = digit(w) - 1;
    return (w - (w / power(10, count)) * power(10, count));
}
