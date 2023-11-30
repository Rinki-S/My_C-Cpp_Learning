#include <stdio.h>
#include <math.h>
float fun(float eps);

int main() {
    float eps;
    scanf("%f", &eps);
    printf("%.4f\n", fun(eps));
    return 0;
}

/* 请在这里填写答案 */
float fun(float eps) {
    float result = 0;
    float temp = 1;
    int flag = -1;
    int i = 1;
    while (fabs(temp) >= eps) {
        result += temp;
        temp = flag * (1.0 / (i * 2 + 1));
        i++;
        flag = -flag;
    }
    return result * 4;
}