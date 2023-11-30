#include <stdio.h>

// 在此处定义strAppend()函数
void strAppend(char s1[], char s2[]) {
    int i = 0;
    while (s1[i] != '\0') {
        i++;
    }
    int j = 0;
    while (s2[j] != '\0') {
        s1[i++] = s2[j++];
    }
    s1[i] = '\0';
}

int main() {
    char s1[1024];
    char s2[1024];

    gets(s1);
    gets(s2);
    strAppend(s1, s2);
    printf("%s", s1);
    return 0;
}