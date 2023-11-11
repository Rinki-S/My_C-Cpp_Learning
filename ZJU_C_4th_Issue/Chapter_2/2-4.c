#include <stdio.h>
int main(void)
{
    int f, c;
    f = 150;
    c = 5 * (f - 32) / 9;
    printf("fahr = 150, celsius = %d", c);
    return 0;
}