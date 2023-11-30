#include <stdio.h>
#include <math.h>

double Round(double x, int d);

int main() {
    double x;
    int d;
    scanf("%lg%d", &x, &d);
    printf("%.15g\n", Round(x, d));
    return 0;
}

/* 你提交的代码将被嵌在这里 */
int power(int x, int n) {
    int result = 1;
    for (int i = 0; i < n; i++) {
        result *= x;
    }
    return result;
}

double Round(double x, int d) {
    double result;
    double temp = power(10, d);
    x *= temp;
    x = round(x);
    x /= temp;
    result = x;
    return result;
}