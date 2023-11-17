#include <stdio.h>
#include <stdlib.h>

struct ListNode
{
    int data;
    struct ListNode *next;
};

struct ListNode *readlist();
struct ListNode *deletem(struct ListNode *L, int m);
void printlist(struct ListNode *L)
{
    struct ListNode *p = L;
    while (p)
    {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}

int main()
{
    int m;
    struct ListNode *L = readlist();
    scanf("%d", &m);
    L = deletem(L, m);
    printlist(L);

    return 0;
}

/* 你的代码将被嵌在这里 */
struct ListNode *readlist()
{
    struct ListNode *head = (struct ListNode *)malloc(sizeof(struct ListNode));
    struct ListNode *p = head;
    struct ListNode *s = NULL;
    int x;
    scanf("%d", &x);
    while (x != -1)
    {
        s = (struct ListNode *)malloc(sizeof(struct ListNode));
        s->data = x;
        p->next = s;
        p = s;
        scanf("%d", &x);
    }
    return head->next;
}

struct ListNode *deletem(struct ListNode *L, int m)
{
    struct ListNode *p = L;
    struct ListNode *prev = NULL;
    while (p != NULL)
    {
        if (p->data == m)
        {
            if (prev != NULL)
            {
                prev->next = p->next;
            }
            else
            {
                L = p->next;
            }
            struct ListNode *temp = p;
            p = p->next;
            free(temp);
        }
        else
        {
            prev = p;
            p = p->next;
        }
    }
    return L;
}
