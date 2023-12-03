#include "stdio.h"

int separate(int n) {
    int sum = 0;
    while (n) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int hexadecimal(int n) {
    int sum = 0;
    int store = n;
    while (n) {
        sum += n % 16;
        n /= 16;
    }
    if (sum == separate(store))
        return 1;
    else
        return 0;
}

int twelve(int n) {
    int sum = 0;
    int store = n;
    while (n) {
        sum += n % 12;
        n /= 12;
    }
    if (sum == separate(store))
        return 1;
    else
        return 0;
}

int main(void) {
    for (int i = 1000; i <= 9999; ++i) {
        if (hexadecimal(i) && twelve(i)) {
            printf("%d", i);
            if(!feof(stdin))
                printf("\n");
        }
    }
    return 0;
}