#include <stdio.h>
#include <math.h>
double fact(int n);
int main(void) {
    int flag = 1, i, n = 1, denominator;
    double x, item, sum = 0.0;
    scanf("%lf", &x);
    for (i = 1; i <= 10; i++) {
        denominator = n * fact(i - 1);
        item = 1.0 * flag * pow(x, i) / denominator;
        sum = sum + item;
        flag = -flag;
        n = n + 2;
    }
    printf("s = %.2f\n", sum);
    return 0;
}
double fact(int n) {
    double fact = 1.0;
    int i;
    for (i = 1; i <= n; i++) {
        fact = fact * i;
    }
    return fact;
}