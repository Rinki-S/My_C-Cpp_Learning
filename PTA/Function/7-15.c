#include "stdio.h"

void swap(int *p, int *q) {
    int temp = *p;
    *p = *q;
    *q = temp;
}

void sort(int a[], int l, int r) {
    for (int i = l; i <= r; ++i) {
        for (int j = i + 1; j <= r; ++j) {
            if (a[j] < a[i])
                swap(&a[j], &a[i]);
        }
    }
}

int main(void) {
    int n, l, r;
    scanf("%d %d %d", &n, &l, &r);
    getchar();
    int array[n];
    for (int i = 0; i < n; ++i) {
        scanf("%d", &array[i]);
    }
    sort(array, l, r);
    for (int i = 0; i < n; ++i) {
        printf("%d ", array[i]);
    }
    return 0;
}