#include "stdio.h"
#include "string.h"
#include "math.h"

int birthday(char s[]) {
    int date_of_birth = 0;
    int temp;
    for (int i = 0; i < 8; ++i) {
        temp = s[i + 6] - '0';
        date_of_birth += pow(10, (7 - i)) * temp;
    }
    return date_of_birth;
}

void swap(char *p, char *q) {
    char temp[20];
    strcpy(temp, q);
    strcpy(q, p);
    strcpy(p, temp);
}

void sort(char b[][20], int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (birthday(b[j]) < birthday(b[i])) {
                swap(b[j], b[i]);
            }
        }
    }
}

int main(void) {
    int n;
    scanf("%d", &n);
    getchar();
    char id[n][20];
    for (int i = 0; i < n; ++i) {
        gets(id[i]);
        // id[i][strlen(id[i]) - 1] = '\0';
    }
    sort(id, n);
    for (int i = 0; i < n; ++i) {
        puts(id[i]);
    }
    return 0;
}