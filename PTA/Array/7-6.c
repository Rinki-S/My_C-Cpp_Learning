#include <stdio.h>

int main(void) {
    int n, count[10], arrayStore[10], index = 0;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < 10; ++i) count[i] = 0;
    for (int i = 0; i < n; ++i) scanf("%d", &a[i]);
    for (int i = 0; i < n; ++i) {
        while (a[i] != 0) {
            count[a[i] % 10]++;
            a[i] /= 10;
        }
    }
    int max = 0;
    for (int i = 1; i < 10; i++) {
        if (count[i] > count[max]) {
            max = i;
        }
    }
    for (int i = 0; i < 10; ++i) {
        if (count[i] == count[max]) {
            arrayStore[index++] = i;
        }
    }
    printf("%d:", count[max]);
    for (int i = 0; i < index; ++i) {
        printf(" %d", arrayStore[i]);
    }
    return 0;
}