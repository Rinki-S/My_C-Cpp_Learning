#include "stdio.h"

int main(void) {
    int n, size;
    scanf("%d %d", &n, &size);
    getchar();
    int array[n], temp[size];
    for (int i = 0; i < n; ++i) {
        scanf("%d", &array[i]);
    }
    for (int i = 0; i < size; ++i) {
        temp[i] = array[i];
    }
    for (int i = 0; i < size; ++i) {
        array[i] = temp[size - i - 1];
    }
    for (int i = 0; i < n; ++i) {
        printf("%d ", array[i]);
    }
    return 0;
}