#include "stdio.h"
#include "string.h"
void split(char sentence[], char words[][50]);
void output(char target_sentence[]);

int main(void) {
<<<<<<< HEAD
    char target_sentence[80][80];
    int time_count = 0;
    while (fgets(target_sentence[time_count],
                 sizeof(target_sentence[time_count]), stdin) != NULL)
    {
        target_sentence[time_count][strlen(target_sentence[time_count]) - 1] =
            '\0';
        time_count++;
    }
    for (int i = 0; i < time_count; ++i) {
        output(target_sentence[i]);
        if (i != time_count - 1) {
            printf("\n");
        }
    }
=======
    char target_sentence[80];
    while (fgets(target_sentence, sizeof(target_sentence), stdin) != NULL) {
        target_sentence[strlen(target_sentence) - 1] = '\0';
        output(target_sentence);
        if (!feof(stdin)) {
            printf("\n");
        }
    }
>>>>>>> c9c2e106d9632487aa24ee290e9535ddb6666e73
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
<<<<<<< HEAD
        int current_word_length = strlen(words[i]);
        if (current_word_length > word_length_max) {
            word_length_max = current_word_length;
            index = 0;  // reset index
            word_length_max_index[index] = i;
            index++;
        } else if (current_word_length == word_length_max) {
=======
        if (strlen(words[i]) > word_length_max) {
            word_length_max = strlen(words[i]);
>>>>>>> c9c2e106d9632487aa24ee290e9535ddb6666e73
            word_length_max_index[index] = i;
            index++;
        }
    }
    printf("%s", words[word_length_max_index[0]]);
}