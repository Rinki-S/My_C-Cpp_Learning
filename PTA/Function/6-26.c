#include <stdio.h>

double Arg(int x, int y);

int main() {
    int m, n;
    scanf("%d%d", &m, &n);
    printf("%.10g\n", Arg(m, n));
    return 0;
}

/* 你提交的代码将被嵌在这里 */
double Arg(int x, int y) {
    int number = x;
    double result = 1;
    for (int i = 0; i < y; i++) {
        result *= number;
        number--;
    }

    return result;
}