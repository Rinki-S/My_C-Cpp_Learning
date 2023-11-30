#include <stdio.h>
int fun(int a[], int n);
int main() {
    int b[10], i, s;
    for (i = 0; i < 10; i++) scanf("%d", &b[i]);
    s = fun(b, 10);
    printf("s=%d\n", s);
    return 0;
}

/* 请在这里填写答案 */
int fun(int a[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            sum += a[i];
        }
    }
    return sum;
}