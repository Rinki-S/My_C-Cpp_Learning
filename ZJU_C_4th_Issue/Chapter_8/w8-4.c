#include <stdio.h>
#define MAXN 20

void CountOff(int n, int m, int out[]);

int main()
{
    int out[MAXN], n, m;
    int i;

    scanf("%d %d", &n, &m);
    CountOff(n, m, out);
    for (i = 0; i < n; i++) printf("%d ", out[i]);
    printf("\n");

    return 0;
}

/* 你的代码将被嵌在这里 */

void CountOff(int n, int m, int out[])
{
    int people[MAXN], count = 0, index = 0, outIndex = 0;
    for (int i = 0; i < n; i++)
    {
        people[i] = 1;
    }
    while (outIndex < n)
    {
        if (people[index] == 1)
        {
            count++;
            if (count == m)
            {
                out[index] = outIndex + 1;
                outIndex++;
                people[index] = 0;
                count = 0;
            }
        }
        index = (index + 1) % n;
    }
}