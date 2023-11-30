#include "stdio.h"

double Sign(double x) {
    if (x > 0) {
        return 1;
    } else if (x == 0) {
        return 0;
    } else {
        return -1;
    }
}

int main(void) {
    double x;
    scanf("%lf", &x);
    printf("%.0f", Sign(x));
    return 0;
}