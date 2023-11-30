#include "stdio.h"
void fun(char a[], char b[]);
int main() {
    char a[80], b[80];
    gets(a);
    fun(a, b);
    puts(b);
    return 0;
}

/* 请在这里填写答案 */
void fun(char a[], char b[]) {
    int ind = 0, length = 0;
    while (a[ind] != '\0') {
        length++;
        ind++;
    }
    for (int i = 0; i < length; i++) {
        b[i] = a[i];
    }
    return;
}