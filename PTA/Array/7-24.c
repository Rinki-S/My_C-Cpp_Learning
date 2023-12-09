#include <stdio.h>

void swap(char *p, char *q) {
    char temp = *p;
    *p = *q;
    *q = temp;
}

int main(void) {
    char string[80];
    fgets(string, 80, stdin);
    int ascii[128];
    for (int i = 0; i < 128; i++) {
        ascii[i] = 0;
    }
    for (int i = 0; string[i] != '\0'; i++) {
        if (ascii[string[i]] != 0) {
            for (int j = i; string[j] != '\0'; j++) {
                string[j] = string[j + 1];
            }
        }
        ascii[string[i]]++;
    }
    for (int i = 0; string[i] != '\0'; i++) {
        char min = i;
        for (int j = i; string[j] != '\0'; j++) {
            if (string[j] < string[min]) {
                min = j;
            }
        }
        swap(&string[i], &string[min]);
    }
    printf("%s", string);
    return 0;
}