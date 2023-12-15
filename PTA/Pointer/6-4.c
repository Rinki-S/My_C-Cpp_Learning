#include <stdio.h>
float fun(int a[], int n, int *max, int *min);
int main() {
    int x[10], i, m, n;
    float p;
    for (i = 0; i < 10; i++) scanf("%d", &x[i]);
    p = fun(x, 10, &m, &n);
    printf("max=%d,min=%d,average=%.2f\n", m, n, p);
    return 0;
}
/* 请在这里填写答案 */
float fun(int a[], int n, int *max, int *min) {
    float average = 0;
    *max = a[0];
    *min = a[0];
    for (int i = 0; i < n; i++) {
        average += a[i];
        if (a[i] > *max)
            *max = a[i];
        if (a[i] < *min)
            *min = a[i];
    }
    average /= n;
    return average;
}