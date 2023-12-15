#include <stdio.h>

void fun(int *p, int *q);
int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    fun(&a, &b);
    printf("%5d%5d\n", a, b);
    return 0;
}

/* 请在这里填写答案 */
void fun(int *p, int *q) {
    int pDigits[4], qDigits[4];
    for (int i = 0; i < 4; i++) {
        pDigits[i] = *p % 10;
        qDigits[i] = *q % 10;
        *p /= 10;
        *q /= 10;
    }
    int temp;
    for (int i = 0; i < 2; i++) {
        temp = pDigits[i];
        pDigits[i] = qDigits[i];
        qDigits[i] = temp;
    }
    *p = 0;
    *q = 0;
    for (int i = 0; i < 4; i++) {
        *p *= 10;
        *q *= 10;
        *p += pDigits[4 - i - 1];
        *q += qDigits[4 - i - 1];
    }
}