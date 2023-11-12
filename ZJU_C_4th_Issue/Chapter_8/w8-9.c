#include <stdio.h>
#define MAXS 15

void StringCount(char *s);
void ReadString(char *s); /* 由裁判实现，略去不表 */

int main()
{
    char s[MAXS];

    ReadString(s);
    StringCount(s);

    return 0;
}

/* Your function will be put here */
void StringCount(char *s)
{
    int uppercase = 0, lowercase = 0, blank = 0, number = 0, other = 0;
    int size = strlen(s);
    for (int i = 0; i < size; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            uppercase++;
        }
        else if (s[i] >= 'a' && s[i] <= 'z')
        {
            lowercase++;
        }
        else if (s[i] >= '0' && s[i] <= '9')
        {
            number++;
        }
        else if (s[i] == ' ')
        {
            blank++;
        }
        else
        {
            other++;
        }
    }
    printf("%d %d %d %d %d", uppercase, lowercase, blank, number, other);
}