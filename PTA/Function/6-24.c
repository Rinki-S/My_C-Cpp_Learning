//
// Created by Rinki on 2023/11/27.
//
#include <stdio.h>
int fun(int n);
int main() {
    int k;
    k = fun(1234);
    printf("k=%d\n", k);
    return 0;
}

/* 请在这里填写答案 */
int fun(int n) {
    int sum = 0;
    int digit;
    while (n != 0) {
        digit = n % 10;
        sum += digit * digit;
        n /= 10;
    }
    return sum;
}