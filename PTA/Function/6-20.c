#include <stdio.h>
int fun(int a[], int n);
int main() {
    int a[10], i;
    for (i = 0; i < 10; i++) scanf("%d", &a[i]);
    printf("%d", fun(a, 10));
    return 0;
}

/* 请在这里填写答案 */
int fun(int a[], int n) {
    int max = a[0];
    int max_index = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }
    for (int i = 0; i < n; i++) {
        if (a[i] == max) {
            max_index = i;
            break;
        }
    }
    return max_index;
}