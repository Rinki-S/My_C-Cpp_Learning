#include "stdio.h"

double Fact(int n) {
    int i;
    double result = 1;
    for (i = 2; i <= n; i++) result *= i;
    return result;
}

int is_odd(int n) {
    if (n % 2 == 0)
        return 0;
    else
        return 1;
}

int main(void) {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        if(!is_odd(i))
            printf("%d! = %.0f\n", i, Fact(i));
    }
    return 0;
}