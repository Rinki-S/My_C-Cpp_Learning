#include <stdio.h>

int fib(int n);

int main() {
    int n;

    scanf("%d", &n);
    printf("%d\n", fib(n));

    return 0;
}

/* 你的代码将被嵌在这里 */
int fib(int n) {
    static int f[1000] = {0};
    if (n == 1 || n == 2) {
        return 1;
    }
    if (f[n] != 0) {
        return f[n];
    }
    f[n] = fib(n - 1) + fib(n - 2);
    return f[n];
}