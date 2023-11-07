/*
 * @pintia psid=1298273728383766528 pid=1298273797619142662 compiler=GCC
 *
 * ProblemSet: 浙大版《C语言程序设计（第4版）》题目集
 *
 * Title: 习题8-2 在数组中查找指定元素
 *
 * https://pintia.cn/problem-sets/1298273728383766528/exam/problems/1298273797619142662
 *
 */
// @pintia code=start
int search(int list[], int n, int x)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (list[i] == x)
        {
            return i;
            count++;
        }
    }
    if (count == 0)
    {
        return -1;
    }
}

// @pintia code=end