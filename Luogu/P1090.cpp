#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n, a;
    int top1, top2;
    long long str = 0, strtemp;
    scanf("%d", &n);
    priority_queue<int, vector<int>, greater<int> > streach;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a);
        streach.push(a);
    }
    while (streach.size() > 1)
    {
        top1 = streach.top();
        streach.pop();
        top2 = streach.top();
        streach.pop();
        strtemp = top1 + top2;
        streach.push(strtemp);
        str += strtemp;
        // cout << top1 << " " << top2 << " " << str << endl;
    }
    cout << str << endl;
    return 0;
}