#include <stdio.h>

int main(void) {
    int m, n;
    scanf("%d %d", &m, &n);
    int matrix[n][n];
    int matrixAfterMove[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) scanf("%d", &matrix[i][j]);
    }
    int move = m % n;
    for (int i = 0; i < n; i++) {
        if (i + move < n) {
            for (int j = 0; j < n; j++)
                matrixAfterMove[j][i + move] = matrix[j][i];
        } else {
            for (int j = 0; j < n; j++)
                matrixAfterMove[j][i + move - n] = matrix[j][i];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrixAfterMove[i][j]);
        }
        printf("\n");
    }
    return 0;
}