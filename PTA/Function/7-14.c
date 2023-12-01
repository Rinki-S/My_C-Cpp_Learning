#include "stdio.h"

int get_unique_count(int a[], int n) {
    int numbers[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, count = 0;
    for (int i = 0; i < n; ++i) {
        numbers[a[i]]++;
    }
    for (int i = 0; i < 10; ++i) {
        if (numbers[i] != 0)
            count++;
    }
    return count;
}

int main(void) {
    int n;
    scanf("%d", &n);
    getchar();
    int array[n];
    for (int i = 0; i < n; ++i) {
        scanf("%d", &array[i]);
    }
    int count = get_unique_count(array, n);
    printf("%d", count);
}