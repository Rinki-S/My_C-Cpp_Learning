#include <stdio.h>
#include <math.h>
int main(void)
{
    int i, n, p;
    scanf("%d", &n);
    for (i = 0; i <= n; i++)
    {
        p = pow(3, i);
        printf("pow(3,%d) = %d\n", i, p);
    }
    return 0;
}