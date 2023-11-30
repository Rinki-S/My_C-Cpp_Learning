//
// Created by Rinki on 2023/11/29.
//
#include "bits/stdc++.h"
#define MAXN 80
using namespace std;

int main(void) {
    string target;
    string input;
    getline(cin, target);
    for (int i = 0; i < 3; ++i) {
        getline(cin, input);
        target[target.size()] = ' ';
        target += input;
    }
    int count[26] = {0};
    for (int i = 0; i < target.size(); ++i) {
        if (target[i] >= 'A' && target[i] <= 'Z')
            count[target[i] - 'A']++;
    }
    int count_max = count[0];
    for (int i = 0; i < 26; ++i) {
        if (count[i] > count_max)
            count_max = count[i];
    }
    vector<vector<char> > output(26, vector<char>(count_max, ' '));
    for (int i = 0; i < count_max; ++i) {
        for (int j = 0; j < 26; ++j) {
            if ((count[j] - i) > 0) {
                output[j][i] = '*';
            }
        }
    }
    for (int i = count_max - 1; i >= 0; --i) {
        for (int j = 0; j < 26; ++j) {
            printf("%c", output[j][i]);
            if (j != 25)
                printf(" ");
        }
        printf("\n");
    }
    printf("A B C D E F G H I J K L M N O P Q R S T U V W X Y Z\n");
    return 0;
}