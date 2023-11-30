#include "stdio.h"

int main(void) {
    int k;
    scanf("%d", &k);
    int n, key;
    for (int i = 0; i < k; ++i) {
        scanf("%d %d", &n ,&key);
        int nums[n], key_index[n], index = 0, flag = -1;
        for (int j = 0; j < n; ++j) {
            scanf("%d", &nums[j]);
            if (nums[j] == key) {
                key_index[index++] = j;
                flag++;
            }
        }
        if (flag != -1)
            printf("%d\n", key_index[0] + 1);
        else
            printf("-1\n");
    }
    return 0;
}