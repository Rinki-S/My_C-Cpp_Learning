#include <stdio.h>
#include <string.h>

void swap(char *p, char *q) {
    char temp = *p;
    *p = *q;
    *q = temp;
}

int main(void) {
    char string[80];
    fgets(string, 80, stdin);
    string[strlen(string) - 1] = '\0';
    int ascii[128] = {0};
    char result[80] = "";
    int index = 0;

    for (int i = 0; string[i] != '\0'; i++) {
        ascii[string[i]]++;
        if (ascii[string[i]] > 1) {
            ascii[string[i]]--;
        } else {
            result[index++] = string[i];
        }
    }

    for (int i = 0; i < index - 1; i++) {
        for (int j = i + 1; j < index; j++) {
            if (result[i] > result[j]) {
                swap(&result[i], &result[j]);
            }
        }
    }

    printf("%s", result);
    return 0;
}