#include <stdio.h>
void fun(char s[]);
int main() {
    char s[80];
    gets(s);
    fun(s);
    puts(s);
    return 0;
}

/* 请在这里填写答案 */
void fun(char s[]) {
    int ind = 0, length = 0;
    while (s[ind] != '\0') {
        length++;
        ind++;
    }
    char temp[length];
    for (int i = 0; i < length; i++) {
        temp[i] = s[i];
    }
    for (int i = 0; i < length; i++) {
        s[i] = temp[length - i - 1];
    }

    return;
}