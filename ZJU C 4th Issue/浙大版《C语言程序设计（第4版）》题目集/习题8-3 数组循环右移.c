/*
 * @pintia psid=1298273728383766528 pid=1298273797619142663 compiler=GCC
 *
 * ProblemSet: 浙大版《C语言程序设计（第4版）》题目集
 *
 * Title: 习题8-3 数组循环右移
 *
 * https://pintia.cn/problem-sets/1298273728383766528/exam/problems/1298273797619142663
 *
 */
// @pintia code=start
void ArrayShift(int a[], int n, int m)
{
    int temp[m];
    int j = 0;
    for (int i = n - m; i < n; i++)
    {
        temp[j] = a[i];
        j++;
    }
    for (int i = n - m - 1; i >= 0; i--)
    {
        a[i + m] = a[i];
    }
    for (int i = 0; i < m; i++)
    {
        a[i] = temp[i];
    }
}
// @pintia code=end