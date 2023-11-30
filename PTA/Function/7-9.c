#include "stdio.h"
#include "string.h"
void split(char sentence[], char words[][50]);
void output(char target_sentence[]);

int main(void) {
    char target_sentence[80];
    while (fgets(target_sentence, sizeof(target_sentence), stdin) != NULL) {
        target_sentence[strlen(target_sentence) - 1] = '\0';
        output(target_sentence);
        if (!feof(stdin)) {
            printf("\n");
        }
    }
    return 0;
}

void split(char sentence[], char words[][50]) {
    int words_index = 0;
    char *token = strtok(sentence, " ,.'!?");

    while (token != NULL) {
        strcpy(words[words_index++], token);
        token = strtok(NULL, " ,.'!?");
    }

    words[words_index][0] = '\0';
}

void output(char target_sentence[]) {
    char words[80][50];
    split(target_sentence, words);
    int word_count = 0;
    int word_length_max, word_length_max_index[80] = {0}, index = 0;
    while (words[word_count][0] != '\0') {
        word_count++;
    }
    word_length_max = strlen(words[0]);
    for (int i = 0; i < word_count; i++) {
        if (strlen(words[i]) > word_length_max) {
            word_length_max = strlen(words[i]);
            word_length_max_index[index] = i;
            index++;
        }
    }
    printf("%s", words[word_length_max_index[0]]);
}