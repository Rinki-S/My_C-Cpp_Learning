#include <stdio.h>
void fun(int a[], int n);
int main() {
    int i, a[10] = {3, 7, 5, 1, 2, 8, 6, 4, 10, 9};
    fun(a, 10);
    for (i = 0; i < 10; i++) printf("%3d", a[i]);
    return 0;
}

/* 请在这里填写答案 */
void swap(int *p, int *q) {
    int temp = *p;
    *p = *q;
    *q = temp;
}

void fun(int a[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                swap(&a[i], &a[j]);
            }
        }
    }
}