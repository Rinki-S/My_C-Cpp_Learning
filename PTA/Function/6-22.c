#include <stdio.h>
int fun(int n);
int main() {
    int n;
    long z;
    scanf("%d", &n);
    z = fun(n);
    printf("%ld", z);
    return 0;
}
/* 请在这里填写答案 */
int fun(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 1) {
            sum += i;
        }
    }
    return sum;
}