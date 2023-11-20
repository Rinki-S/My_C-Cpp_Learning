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
// struct ListNode *readlist()
// {
//     struct ListNode *head = (struct ListNode *)malloc(sizeof(struct
//     ListNode)); struct ListNode *p = head; struct ListNode *s = NULL; int x;
//     scanf("%d", &x);
//     while (x != -1)
//     {
//         s = (struct ListNode *)malloc(sizeof(struct ListNode));
//         s->data = x;
//         p->next = s;
//         p = s;
//         scanf("%d", &x);
//     }
//     return head->next;
// }

// struct ListNode *deletem(struct ListNode *L, int m)
// {
//     struct ListNode *p = L;
//     struct ListNode *prev = NULL;
//     while (p != NULL)
//     {
//         if (p->data == m)
//         {
//             if (prev != NULL)
//             {
//                 prev->next = p->next;
//             }
//             else
//             {
//                 L = p->next;
//             }
//             struct ListNode *temp = p;
//             p = p->next;
//             free(temp);
//         }
//         else
//         {
//             prev = p;
//             p = p->next;
//         }
//     }
//     return L;
// }
struct ListNode *readlist()
{
    struct ListNode *head, *p, *tail;
    int data;
    int size = sizeof(struct ListNode);
    head = tail = NULL;
    scanf("%d", &data);
    while (data != -1)
    {
        p = (struct ListNode *)malloc(size);
        p->data = data;
        p->next = NULL;
        if (head == NULL)
        {
            head = p;
        }
        else
        {
            tail->next = p;
        }
        tail = p;
        scanf("%d", &data);
    }
    return head;
}

struct ListNode *deletem(struct ListNode *L, int m)
{
    struct ListNode *head = NULL, *q = NULL;
    struct ListNode *p = L;
    while (p != NULL)
    {
        if (p->data != m)
        {
            head = p;
            q = p->next;
            break;
        }
        else
        {
            p = p->next;
            head = p;
        }
    }

    while (q != NULL)
    {
        if (q->data == m)
        {
            p->next = q->next;
        }
        p = q;
        q = q->next;
    }
    return head;
}