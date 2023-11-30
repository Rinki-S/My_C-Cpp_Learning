#include <stdio.h>
float fun(int n);
int main() {
    float s;
    s = fun(20);
    printf("%f\n", s);
    return 0;
}

/* 请在这里填写答案 */
float fun(int n) {
    float sum = 0.0;
    if (n == 1) {
        sum = 1.0;
    } else {
        sum = 1.0;
        for (int i = 1; i < n; i++) {
            sum += 1.0 / (i * (i + 1));
        }
    }

    return sum;
}