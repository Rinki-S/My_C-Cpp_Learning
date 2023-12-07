#include <stdio.h>

int main(void) {
    int n1, n2, index = 0;
    scanf("%d", &n1);
    int a1[n1];
    for (int i = 0; i < n1; ++i) scanf("%d", &a1[i]);
    scanf("%d", &n2);
    int a2[n2];
    for (int i = 0; i < n2; ++i) scanf("%d", &a2[i]);
    int diff[n1 > n2 ? n1 : n2];
    for (int i = 0; i < n1; ++i) {
        for (int j = 0; j < n2; ++j) {
            if (a1[i] == a2[j]) {
                break;
            }
            if (j == n2 - 1)
                diff[index++] = a1[i];
        }
    }
    for (int i = 0; i < n2; ++i) {
        for (int j = 0; j < n1; ++j) {
            if (a2[i] == a1[j]) {
                break;
            }
            if (j == n1 - 1)
                diff[index++] = a2[i];
        }
    }
    for (int i = 0; i < index; ++i) {
        for (int j = i + 1; j < index; ++j) {
            if (diff[i] == diff[j]) {
                for (int k = j; k < index - 1; ++k) {
                    diff[k] = diff[k + 1];
                }
                index--;
            }
        }
    }
    for (int i = 0; i < index; ++i) {
        printf("%d", diff[i]);
        if (i != index - 1)
            printf(" ");
    }
    return 0;
}