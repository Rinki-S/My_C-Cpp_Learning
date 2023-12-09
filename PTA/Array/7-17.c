#include <stdio.h>
#include <string.h>

int main(void) {
    char string[80];
    fgets(string, 80, stdin);
    int count = 0;
    int length = strlen(string);
    for (int i = 0; i < length; i++) {
        if (!(string[i] == 'A' || string[i] == 'E' || string[i] == 'I' ||
              string[i] == 'O' || string[i] == 'U') &&
            (string[i] >= 'A' && string[i] <= 'Z'))
        {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}