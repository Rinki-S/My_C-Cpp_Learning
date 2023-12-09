#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void) {
    char password[80];
    int offset;
    fgets(password, 80, stdin);
    scanf("%d", &offset);
    offset %= 26;
    for (int i = 0; password[i] != '\0'; i++) {
        if (password[i] >= 'a' && password[i] <= 'z') {
            password[i] = (password[i] - 'a' + offset + 26) % 26 + 'a';
        } else if (password[i] >= 'A' && password[i] <= 'Z') {
            password[i] = (password[i] - 'A' + offset + 26) % 26 + 'A';
        }
    }
    printf("%s", password);
    return 0;
}