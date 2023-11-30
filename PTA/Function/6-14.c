#include <stdio.h>
void inv(int x[], int n);
int main() {
    int i, a[100], n;
    scanf("%d", &n);
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    inv(a, n);
    for (i = 0; i < n; i++) printf("%4d", a[i]);
    printf("\n");
    return 0;
}

/* 请在这里填写答案 */
void swap(int *p, int *q) {
    int temp = *p;
    *p = *q;
    *q = temp;
}

void inv(int x[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (x[i] < x[j]) {
                swap(&x[i], &x[j]);
            }
        }
    }
    return;
}