#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[5][81];
    char temp[81];
    for (int i = 0; i < 5; i++)
    {
        scanf("%s", str[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (strcmp(str[i], str[j]) > 0)
            {
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }
    }
    printf("After sorted:\n");
    for (int i = 0; i < 5; i++)
    {
        puts(str[i]);
    }

    return 0;
}
