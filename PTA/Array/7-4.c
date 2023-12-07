#include <stdio.h>

void swap(int *p1, int *p2) {
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main(void) {
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; ++i) scanf("%d", &a[i]);
    int max = 0, min = 0;
    for (int i = 1; i < n; ++i) {
        for (int j = i; j < n; ++j) {
            if (a[j] < a[min])
                min = j;
        }
    }
    swap(&a[0], &a[min]);
    for (int i = 1; i < n; ++i) {
        for (int j = i; j < n; ++j) {
            if (a[j] > a[max])
                max = j;
        }
    }
    swap(&a[n - 1], &a[max]);
    for (int i = 0; i < n; ++i) {
        printf("%d ", a[i]);
    }
    return 0;
}