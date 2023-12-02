#include <stdio.h>

void swap(int *p, int *q) {
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
}

void selection_sort_once(int a[], int n, int start_index) {
    int min = start_index;
    for (int i = start_index; i < n; ++i) {
        if (a[i] < a[min]) {
            min = i;
        }
    }
    swap(&a[min], &a[start_index]);
}

int main(void) {
    int m, n;
    int index = 0;

    while (scanf("%d %d", &n, &m) == 2) {
        getchar();  // consume newline

        int array[n];
        for (int i = 0; i < n; ++i) {
            scanf("%d", &array[i]);
        }

        for (int i = 0; i < m; ++i) {
            selection_sort_once(array, n, index);
            index++;
        }

        for (int i = 0; i < n; ++i) {
            printf("%d", array[i]);
            if (i != n - 1) {
                printf(" ");
            }
        }

        index = 0;
        printf("\n");
    }

    return 0;
}
