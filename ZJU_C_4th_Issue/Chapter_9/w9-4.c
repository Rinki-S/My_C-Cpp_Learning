#include <stdio.h>
#define MAXN 30

struct book
{
    double price;
    char name[MAXN];
};

int main(void)
{
    int index = 0;
    int maxindex = 0, minindex = 0;
    int n;
    char ch;
    scanf("%d", &n);
    struct book books[n];
    getchar();
    for (int i = 0; i < n; i++)
    {
        while ((ch = getchar()) != '\n')
        {
            books[i].name[index] = ch;
            index++;
        }
        books[i].name[index] = '\0';
        index = 0;
        scanf("%lf", &books[i].price);
        getchar();
    }
    double max = books[0].price;
    double min = max;
    for (int i = 0; i < n; i++)
    {
        if (books[i].price > max)
        {
            max = books[i].price;
            maxindex = i;
        }
        if (books[i].price < min)
        {
            min = books[i].price;
            minindex = i;
        }
    }
    printf("%.2lf, %s", books[maxindex].price, books[maxindex].name);
    printf("\n");
    printf("%.2lf, %s", books[minindex].price, books[minindex].name);
    return 0;
}
