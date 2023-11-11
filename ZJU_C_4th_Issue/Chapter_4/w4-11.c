#include <stdio.h>

int main(void)
{
    int n, time = 1, r = 0, a = 0, b = 1;
    scanf("%d", &n);
    while (r < n)
    {
        a = b;
        b = r;
        r = a + b;
        time++;
    }
    time -= 1;
    printf("%d", time);
    return 0;
}