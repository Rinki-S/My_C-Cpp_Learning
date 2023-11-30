#include <stdio.h>
int fun(int x);
int main() {
    int m, n;
    scanf("%d", &m);
    n = fun(m);
    printf("%d\n", n);
    return 0;
}

/* 请在这里填写答案 */
int fun(int x) {
    int count = 0;
    while (x != 0) {
        x /= 10;
        count++;
    }
    return count;
}