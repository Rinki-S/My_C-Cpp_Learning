
#include <stdio.h>

void Compute_Result(int N, int D, int *R);

int main() {
    int N, D;
    int result = 0;

    scanf("%d %d", &N, &D);
    Compute_Result(N, D, &result);
    printf("%d", result);

    return 0;
}

/* 请在这里填写答案 */
void Compute_Result(int N, int D, int *R) {
    *R = N - D;
}