#include <stdio.h>

void CalFun(int datain[]);

int main(int argc, char *argv[]) {
    int i;
    int data[10];
    for (i = 0; i < 10; i++) {
        scanf("%d", &data[i]);
    }

    CalFun(data);
    return 0;
}

/* 请在这里填写答案 */
void CalFun(int datain[]) {
    int pos = 0, neg = 0, zero = 0;
    for (int i = 0; i < 10; i++) {
        if (datain[i] > 0) {
            pos++;
        } else if (datain[i] == 0) {
            zero++;
        } else if (datain[i] < 0) {
            neg++;
        }
    }
    printf("%d %d %d", pos, zero, neg);
}