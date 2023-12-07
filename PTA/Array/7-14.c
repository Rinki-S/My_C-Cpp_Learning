#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    int yangHuiTriangle[n][n];
    for (int i = 0; i < n; i++) {
        yangHuiTriangle[i][0] = 1;
        yangHuiTriangle[i][i] = 1;
    }
    for (int i = 2; i < n; i++) {
        for (int j = 1; j < i; j++) {
            yangHuiTriangle[i][j] =
                yangHuiTriangle[i - 1][j - 1] + yangHuiTriangle[i - 1][j];
        }
    }
    int spaceCount = n - 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < spaceCount; j++) printf(" ");
        for (int j = 0; j < i + 1; j++) printf("%4d", yangHuiTriangle[i][j]);
        printf("\n");
        spaceCount--;
    }
    return 0;
}