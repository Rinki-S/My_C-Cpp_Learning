#include "stdio.h"

int main(void) {
    int n;
    scanf("%d", &n);
    getchar();
    int array[n], reversed_array[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }
    for (int i = 0; i < n; i++) {
        reversed_array[i] = array[n - i - 1];
        printf("%d", reversed_array[i]);
        if (i != n - 1) {
            printf(" ");
        }
    }
    return 0;
}