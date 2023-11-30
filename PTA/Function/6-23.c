//
// Created by Rinki on 2023/11/27.
//
#include <stdio.h>
#define N 11
void fun(int a[N], int number);
int main() {
    int i, number, a[N] = {1, 2, 4, 6, 8, 9, 12, 15, 149, 156};
    scanf("%d", &number);
    printf("The original array:\n");
    for (i = 0; i < N - 1; i++) printf("%5d", a[i]);
    printf("\n");
    fun(a, number);
    printf("The result array:\n");
    for (i = 0; i < N; i++) printf("%5d", a[i]);
    printf("\n");
    return 0;
}

/* 请在这里填写答案 */
void fun(int a[N], int number) {
    int i, j;
    for (i = 0; i < N; i++) {
        if (a[i] > number) {
            for (j = N - 1; j > i; j--) {
                a[j] = a[j - 1];
            }
            a[i] = number;
            break;
        }
    }
}