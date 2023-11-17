#include <stdio.h>
#include <stdlib.h>

struct ListNode
{
    int data;
    struct ListNode *next;
};

struct ListNode *readlist();
struct ListNode *getodd(struct ListNode **L);
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
    struct ListNode *L, *Odd;
    L = readlist();
    Odd = getodd(&L);
    printlist(Odd);
    printlist(L);

    return 0;
}

/* 你的代码将被嵌在这里 */

struct ListNode *readlist()
{
    struct ListNode *head = (struct ListNode *)malloc(sizeof(struct ListNode));
    struct ListNode *a = NULL;
    struct ListNode *b = head;
    int x;
    scanf("%d", &x);
    while (x != -1)
    {
        a = (struct ListNode *)malloc(sizeof(struct ListNode));
        a->data = x;
        b->next = a;  // head->next = a;
        b = a;
        scanf("%d", &x);
    }
    b->next = NULL;
    return head->next;
}

struct ListNode *getodd(struct ListNode **L)
{
    struct ListNode *p = *L;
    struct ListNode *odd_head = NULL;
    struct ListNode **last_ptr = &odd_head;
    struct ListNode **prev_ptr = L;

    while (p != NULL)
    {
        if (p->data % 2 == 1)
        {
            struct ListNode *new_node =
                (struct ListNode *)malloc(sizeof(struct ListNode));
            new_node->data = p->data;
            new_node->next = NULL;
            *last_ptr = new_node;
            last_ptr = &(new_node->next);

            *prev_ptr = p->next;
            free(p);
            p = *prev_ptr;
        }
        else
        {
            prev_ptr = &(p->next);
            p = p->next;
        }
    }
    return odd_head;
}
