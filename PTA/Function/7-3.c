#include "stdio.h"
#include "math.h"

int fact(int n) {
    int result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

int main(void) {
    int x;
    int flag = 1;
    double s = 0;
    int denominator;
    scanf("%d", &x);
    for (int i = 1; i <= 10; ++i) {
        denominator = (2 * i - 1) * fact(i - 1);
        s += flag * (pow(x, i * 2 - 1) / denominator);
        flag = -flag;
    }
    printf("s = %.2lf", s);
    return 0;
}