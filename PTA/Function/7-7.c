#include "stdio.h"

void swap(int *p, int *q) {
    int temp;
    temp = *q;
    *q = *p;
    *p = temp;
}

int main(void) {
    int num[10];
    for (int i = 0; i < 10; i++) {
        scanf("%d", &num[i]);
    }
    for (int i = 0; i < 10; i++) {
        int max = i;
        for (int j = i + 1; j < 10; j++) {
            if (num[j] > num[max]) {
                max = j;
            }
        }
        swap(&num[i], &num[max]);
    }
    for (int i = 0; i < 10; i++) {
        printf("%5d", num[i]);
    }
    return 0;
}