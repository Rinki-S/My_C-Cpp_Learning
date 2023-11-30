#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#define NULL __DARWIN_NULL

void split(char sentence[], char words[]) {
    int words_index = 0;
    char *token = strtok(sentence, " ");

    while (token != NULL) {
        words[words_index++] = token;
        token = strtok(NULL, " ");
    }
}

int main(void) {}