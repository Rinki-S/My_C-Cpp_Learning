#include "stdio.h"
#include "string.h"
#define MAXN 1000

int main() {
    int index = 0, word_index, word_count = 0, positions_index = 1;
    int letter_index, count_output = 0;
    int positions_output[MAXN];
    char ch_input;
    char target_word[MAXN], target_sentence[MAXN], words[MAXN][MAXN];
    int positions[MAXN];
    while ((ch_input = getchar()) != '\n') {
        if (ch_input >= 'A' && ch_input <= 'Z')
            ch_input = 'a' + (ch_input - 'A');
        target_word[index] = ch_input;
        index++;
    }
    target_word[index] = '\0';
    index = 0;
    fgets(target_sentence, MAXN, stdin);
    while (target_sentence[index]) {
        if (target_sentence[index] >= 'A' && target_sentence[index] <= 'Z')
            target_sentence[index] = 'a' + (target_sentence[index] - 'A');
        index++;
    }
    index = 0;
    positions[0] = 0;
    while (target_sentence[index]) {
        if (target_sentence[index] == ' ') {
            positions[positions_index] = index + 1;
            positions_index++;
            word_count++;
        }
        index++;
    }
    word_count++;
    positions[positions_index] = index + 1;
    index = 0;
    word_index = 0;
    letter_index = 0;
    while (target_sentence[index]) {
        if (target_sentence[index] != ' ' && target_sentence[index] != '\n') {
            words[word_index][letter_index] = target_sentence[index];
            letter_index++;
        } else {
            words[word_index][letter_index] = '\0';
            word_index++;
            letter_index = 0;
        }
        index++;
    }
    words[word_index][letter_index] = '\0';
    for (int i = 0; i < word_count; ++i) {
        if (strlen(words[i]) != strlen(target_word))
            continue;
        for (int j = 0; j < strlen(words[i]); ++j) {
            if (target_word[j] != words[i][j])
                break;
            if (j == strlen(words[i]) - 1) {
                positions_output[count_output] = positions[i];
                count_output++;
            }
        }
    }
    if (count_output == 0)
        printf("-1\n");
    else
        printf("%d %d\n", count_output, positions_output[0]);
    // printf("1.%s\n", target_sentence);
    // printf("2.%s\n", target_word);
    // for (int i = 0; i < word_count; i++) {
    //     printf("3.%s\n", words[i]);
    // }

    return 0;
}