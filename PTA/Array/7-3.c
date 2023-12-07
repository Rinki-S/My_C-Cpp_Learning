#include <stdio.h>

void swap(int *p, int *q) {
    int temp = *p;
    *p = *q;
    *q = temp;
    return;
}

int main(void) {
    int n;
    scanf("%d", &n);
    int array[n], sorted_array[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }
    for (int i = 0; i < n; i++) {
        sorted_array[i] = array[i];
    }
    for (int i = 0; i < n - 1; i++) {
        int max = i;
        for (int j = i; j < n; j++) {
            if (sorted_array[j] > sorted_array[max]) {
                max = j;
            }
        }
        swap(&sorted_array[i], &sorted_array[max]);
    }
    for (int i = 0; i < n; i++) {
        printf("%d", sorted_array[i]);
        if (i != n - 1) {
            printf(" ");
        }
    }
    return 0;
}