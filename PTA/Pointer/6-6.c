#include <stdio.h>
#define MAXN 20
void delchar(char *str, char c);
void ReadString(char s[]); /* 由裁判实现，略去不表 */

int main() {
    char str[MAXN], c;

    scanf("%c\n", &c);
    ReadString(str);
    delchar(str, c);
    printf("%s\n", str);

    return 0;
}

/* 你的代码将被嵌在这里 */
void ReadString(char s[]) {
    scanf("%s", s);
}

void delchar(char *str, char c) {
    int length = 0;
    while (*(str + length) != '\0') {
        length++;
    }
    for (int i = 0; i < length; i++) {
        if (*(str + i) == c) {
            for (int j = i; j < length - 1; j++) {
                *(str + j) = *(str + j + 1);
            }
            *(str + length - 1) = '\0';
            length--;
            i--;
        }
    }
}