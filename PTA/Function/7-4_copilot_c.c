#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_WORDS 100
#define MAX_WORD_LENGTH 50

int main() {
    // Get the target word.
    char target_word[MAX_WORD_LENGTH];
    scanf("%s", target_word);

    // Convert the target word to lower case.
    for (int i = 0; target_word[i]; i++) {
        target_word[i] = tolower(target_word[i]);
    }

    // Ignore the newline character after target_word.
    getchar();

    // Get the target sentence.
    char target_sentence[1000];
    fgets(target_sentence, 1000, stdin);

    // Remove the newline character at the end of the sentence.
    target_sentence[strcspn(target_sentence, "\n")] = 0;

    // Split the sentence into words and record their positions.
    char words[MAX_WORDS][MAX_WORD_LENGTH];
    int positions[MAX_WORDS];
    int word_count = 0;
    char *word = strtok(target_sentence, " ");
    while (word != NULL) {
        strcpy(words[word_count], word);
        positions[word_count] = word - target_sentence;
        word_count++;
        word = strtok(NULL, " ");
    }

    // Count the appearances of the target word.
    int word_appearance_count = 0;
    int word_appearance_positions[MAX_WORDS];
    for (int i = 0; i < word_count; i++) {
        // Convert the word to lower case.
        char word[MAX_WORD_LENGTH];
        strcpy(word, words[i]);
        for (int j = 0; word[j]; j++) {
            word[j] = tolower(word[j]);
        }

        if (strcmp(word, target_word) == 0) {
            word_appearance_positions[word_appearance_count] = positions[i];
            word_appearance_count++;
        }
    }

    // Output
    if (word_appearance_count == 0)
        printf("-1");
    else
        printf("%d %d", word_appearance_count, word_appearance_positions[0]);

    return 0;
}