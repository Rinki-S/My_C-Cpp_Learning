#include <stdio.h>

void swap(int *p1, int *p2) {
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main(void) {
    int n;
    scanf("%d", &n);
    int a[n + 1];
    for (int i = 0; i < n; ++i) scanf("%d", &a[i]);
    scanf("%d", &a[n]);
    for (int i = 0; i <= n; i++) {
        for (int j = i; j <= n; j++) {
            if (a[j] < a[i])
                swap(&a[i], &a[j]);
        }
    }
    for (int i = 0; i <= n; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}