/* ���������ɾ�Ĳ���� */
#include <stdio.h>
#define MAXN 10000 /* ������ų�����ʾ����a�ĳ��� */

int Count = 0; /* ��ȫ�ֱ���Count��ʾ����a�д�������Ԫ�ظ��� */
void select(int a[], int option,
            int value); /* ��������������a���к��ֲ����Ŀ��ƺ��� */
int input_array(int a[]); /* ������������a�ĺ��� */
void print_array(int a[]); /* �����������a�ĺ��� */
int insert(int a[], int value); /* ����������a�в���һ��ֵΪvalue��Ԫ�صĺ��� */
int del(int a[], int value); /* ɾ����������a�е���value��Ԫ�صĺ��� */
int modify(int a[], int value1,
           int value2); /* ����������a�е���value1��Ԫ�أ��滻Ϊvalue2 */
int query(int a[], int value); /* �ö��ַ�����������a�в���Ԫ��value�ĺ��� */

int main(void)
{
    int option, value, a[MAXN];

    if (input_array(a) == -1)
    { /* ���ú��������������� a */
        printf("Error"); /* a�����������飬�������Ӧ����Ϣ */
        return 0;
    }

    printf("[1] Insert\n"); /* ����4����ʾ�˵�*/
    printf("[2] Delete\n");
    printf("[3] Update\n");
    printf("[4] Query\n");
    printf("[Other option] End\n");
    while (1)
    {                         /* ѭ�� */
        scanf("%d", &option); /* �����û�����ı�� */
        if (option < 1 || option > 4)
        { /* �������1��2��3��4����ı�ţ�����ѭ�� */
            break;
        }
        scanf("%d", &value); /* �����û�����Ĳ���value */
        select(a, option, value); /* ���ÿ��ƺ��� */
        printf("\n");
    }
    printf("Thanks."); /* �������� */

    return 0;
}

/* ���ƺ��� */
void select(int a[], int option, int value)
{
    int index, value2;

    switch (option)
    {
        case 1:
            index = insert(a, value); /* ���ò��뺯������������ a �в���Ԫ��value */
            if (index == -1)
            { /* ���������Ѵ��ڣ��������Ӧ����Ϣ */
                printf("Error");
            }
            else
            {
                print_array(a); /* ������������������������������a */
            }
            break;
        case 2:
            index = del(a, value); /* ����ɾ���������������� a ��ɾ��Ԫ��value */
            if (index == -1)
            { /* û�ҵ�value���������Ӧ����Ϣ */
                printf("Deletion failed.");
            }
            else
            {
                print_array(a); /* ����������������ɾ�������������a */
            }
            break;
        case 3:
            scanf("%d", &value2); /* �����û�����Ĳ���value2 */
            index = modify(
                a, value,
                value2); /* �����޸ĺ�������������
                          * a ���޸�Ԫ��value��ֵΪvalue2
                          */
            if (index == -1)
            { /* û�ҵ�value����vaule2�Ѵ��ڣ��������Ӧ����Ϣ */
                printf("Update failed.");
            }
            else
            {
                print_array(
                    a); /* �����������������޸ĺ����������a
                         */
            }
            break;
        case 4:
            index = query(a, value); /* ���ò�ѯ�������������� a �в���Ԫ��value */
            if (index == -1)
            { /* û�ҵ�value���������Ӧ����Ϣ */
                printf("Not found.");
            }
            else
            { /* �ҵ����������Ӧ���±� */
                printf("%d", index);
            }
            break;
    }
}

/* ��������뺯�� */
int input_array(int a[])
{
    scanf("%d", &Count);
    for (int i = 0; i < Count; i++)
    {
        scanf("%d", &a[i]);
        if (i > 0 && a[i] <= a[i - 1])
        { /* a������������ */
            return -1;
        }
    }

    return 0;
}

/* ������������ */
void print_array(int a[])
{
    for (int i = 0; i < Count; i++)
    { /* ���ʱ�������ּ���һ���ո�ֿ�����ĩ�޿ո�
       */
        if (i == 0)
        {
            printf("%d", a[i]);
        }
        else
        {
            printf(" %d", a[i]);
        }
    }
}

int insert(int a[], int value)
{
    int *p, i = 0, temp, flag = 1, j, count = 0, pos;
    p = a;
    for (int k = 0; k < Count; k++)
    {
        if (p[k] == value)
        {
            flag = -1;
        }
    }
    for (i = 0; i < Count; i++)
    {
        if (value < a[i])
        {
            break;
        }
    }
    for (j = Count - 1; j >= i; j--)
    {
        *(p + j + 1) = *(p + j);
    }
    a[i] = value;
    Count++;
    return flag;
}

int del(int a[], int value)
{
    int *p, i = 0, temp, index = -1;
    p = a;
    for (int k = 0; k < Count; k++)
    {
        if (p[k] == value)
        {
            index = k;
        }
    }
    for (i = index; i < Count; i++)
    {
        a[i] = a[i + 1];
    }
    Count--;
    if (index != -1)
    {
        index = 1;
    }
    return index;
}

int modify(int a[], int value1, int value2)
{
    int *p, i = 0, temp, flag = -1;
    p = a;
    while ((*(p + i)) != '\0')
    {
        temp = *(p + i);
        if (temp == value1)
        {
            flag = 1;
            *(p + i) = value2;
        }
        else if (temp == value2)
        {
            flag = -1;
            break;
        }
        else
        {
        }
        i++;
    }
    i = 0;
    while (a[i + 1] != '\0')
    {
        if (a[i] > a[i + 1])
        {
            temp = a[i];
            a[i] = a[i + 1];
            a[i + 1] = temp;
        }
        else
        {
        }
        i++;
    }
    return flag;
}

int query(int a[], int value)
{
    int index = -1, m, n;
    int i = 0;
    m = 0;
    n = Count - 1;
    while (m <= n)
    {
        i = (m + n) / 2;
        if (a[i] > value)
        {
            n = i - 1;
        }
        else if (a[i] < value)
        {
            m = i + 1;
        }
        else if (a[i] == value)
        {
            index = i;
            break;
        }
        else
        {
        }
    }
    return index;
}