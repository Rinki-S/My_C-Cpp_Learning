#include <stdio.h>
#define N 1000

int prime(int x);

int main() {
    int x, k;
    scanf("%d", &x);
    k = prime(x);
    if (k)
        printf("%d is prime", x);
    else
        printf("%d is not prime", x);
    return 0;
}

/* 请在这里填写答案 */
int prime(int x) {
    if (x == 1) {
        return 0;
    }
    for (int i = 2; i < x; i++) {
        if (x % i == 0) {
            return 0;
        }
    }
    return 1;
}