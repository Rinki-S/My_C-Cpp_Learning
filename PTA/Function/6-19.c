#include <stdio.h>
void fun(char s[]);
int main() {
    char item[80];
    gets(item);
    fun(item);
    printf("%s\n", item);
    return 0;
}

/* 请在这里填写答案 */
void fun(char s[]) {
    int ind = 0;
    char numbers[80];
    int num_count = 0;
    while (s[ind]) {
        if (s[ind] >= '0' && s[ind] <= '9') {
            numbers[num_count] = s[ind];
            num_count++;
        }
        ind++;
    }
    numbers[num_count] = '\0';
    ind = 0;
    while (numbers[ind]) {
        s[ind] = numbers[ind];
        ind++;
    }
    s[ind] = '\0';
    return;
}