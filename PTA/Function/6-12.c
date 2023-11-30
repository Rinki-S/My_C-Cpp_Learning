#include <stdio.h>
double fun(int n);
int main() {
    int i, n;
    double f = 0;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) f += fun(i);
    printf("%.0lf\n", f);
    return 0;
}

/* 请在这里填写答案 */
double fun(int n) {
    double result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}