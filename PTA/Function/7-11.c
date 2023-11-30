#include "stdio.h"

int sum(int a, int b, int c) {
    return a + b + c;
}

int main(void) {
    int x, y, z;
    scanf("%d%d%d", &x, &y, &z);
    printf("%d", sum(x, y, z));
    return 0;
}