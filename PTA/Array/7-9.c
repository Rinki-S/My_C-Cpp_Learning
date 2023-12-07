#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    int a[n], count[n][2];
    for (int i = 0; i < n; ++i) scanf("%d", &a[i]);
    for (int i = 0; i < n; ++i) count[i][0] = a[i];
    for (int i = 0; i < n; ++i) count[i][1] = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = i; j < n; ++j) {
            if (count[i][0] == count[j][0]) {
                count[i][1]++;
            }
        }
    }
    int max = 0;
    for (int i = 1; i < n; ++i) {
        if (count[i][1] > count[max][1]) {
            max = i;
        }
    }
    printf("%d %d", count[max][0], count[max][1]);
    return 0;
}