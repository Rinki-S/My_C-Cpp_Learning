#include <stdio.h>

int getScore(char g);
int main() {
    char ch;
    int n = 0, sum = 0;
    while (ch = getchar(), ch != '\n') {
        sum += getScore(ch);
        n++;
    }
    printf("%.1f\n", 1.0 * sum / n);
    return 0;
}

/* 请在这里填写答案 */
int getScore(char g) {
    switch (g) {
        case 'A': return 95;
        case 'B': return 85;
        case 'C': return 75;
        case 'D': return 65;
        case 'E': return 40;
        default: return 0;
    }
}