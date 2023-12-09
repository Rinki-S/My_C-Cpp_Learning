#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    int spiralArray[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            spiralArray[i][j] = 0;
        }
    }
    int rowScaleDown = n - 1, rowScaleUp = 0, columnScaleRight = n - 1,
        columnScaleLeft = 0;
    int row = 0, column = 0;
    int count = 1;
    int direction = 1;
    // 1 -> right
    // 2 -> down
    // 3 -> left
    // 4 -> up
    while (count <= n * n) {
        spiralArray[row][column] = count++;
        if (direction == 1 && column < columnScaleRight) {
            column++;
        } else if (direction == 1 && column == columnScaleRight) {
            direction = 2;
            rowScaleUp++;
            row++;
        } else if (direction == 2 && row < rowScaleDown) {
            row++;
        } else if (direction == 2 && row == rowScaleDown) {
            direction = 3;
            columnScaleRight--;
            column--;
        } else if (direction == 3 && column > columnScaleLeft) {
            column--;
        } else if (direction == 3 && column == columnScaleLeft) {
            direction = 4;
            rowScaleDown--;
            row--;
        } else if (direction == 4 && row > rowScaleUp) {
            row--;
        } else if (direction == 4 && row == rowScaleUp) {
            direction = 1;
            columnScaleLeft++;
            column++;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%3d", spiralArray[i][j]);
        }
        printf("\n");
    }
    return 0;
}