#include <stdio.h>
#include <string.h>

int main(void) {
    char string[100];
    fgets(string, 100, stdin);
    int length = strlen(string);
    for (int i = 0; i < length; i++) {
        if (string[i] >= 'A' && string[i] <= 'Z') {
            string[i] = 'Z' - string[i] + 'A';
        }
    }
    printf("%s", string);
    return 0;
}