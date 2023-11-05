#include <stdio.h>

int main(void)
{
    char input;
    int n;
    int directory = 0;
    scanf("%d", &n);
    getchar();
    for (int i = 0; i < n; i++)
    {
        input = getchar();
        switch (input)
        {
            case 'N': directory = 1; break;
            case 'Q':
                if (directory == 1)
                {
                    printf("Yes");
                }
                else
                {
                    printf("No");
                }
                break;
            case '-': directory = 0; break;
            case 'Y': break;
        }
        if ((i != n - 1) && (input == 'Q'))
        {
            printf("\n");
        }
    }
    return 0;
}