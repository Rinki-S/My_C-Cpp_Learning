#include <stdio.h>
#define MAXS 20

void f(char *p);
void ReadString(char *s); /* 由裁判实现，略去不表 */

int main() {
    char s[MAXS];

    ReadString(s);
    f(s);
    printf("%s\n", s);

    return 0;
}

/* 你的代码将被嵌在这里 */
void ReadString(char *s) {
    scanf("%s", s);
}

void f(char *p) {
    int length = 0;
    while (*(p + length) != '\0') {
        length++;
    }
    for (int i = 0; i < length / 2; i++) {
        char temp = *(p + i);
        *(p + i) = *(p + length - i - 1);
        *(p + length - i - 1) = temp;
    }
}