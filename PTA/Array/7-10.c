#include <stdio.h>

int main(void) {
    int m, n, flag = 0;
    scanf("%d %d", &m, &n);
    int partialMax[(m - 1) * (n - 1)][3], index = 0;
    int a[m][n];
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) scanf("%d", &a[i][j]);
    }
    for (int i = 1; i < m - 1; ++i) {
        for (int j = 1; j < n - 1; ++j) {
            if (a[i][j] > a[i - 1][j] && a[i][j] > a[i + 1][j] &&
                a[i][j] > a[i][j + 1] && a[i][j] > a[i][j - 1])
            {
                partialMax[index][0] = a[i][j];
                partialMax[index][1] = i;
                partialMax[index][2] = j;
                index++;
                flag = 1;
            }
        }
    }
    if (flag == 0)
        printf("None %d %d\n", m, n);
    else {
        for (int i = 0; i < index; ++i) {
            printf("%d %d %d\n", partialMax[i][0], partialMax[i][1] + 1,
                   partialMax[i][2] + 1);
        }
    }
    return 0;
}