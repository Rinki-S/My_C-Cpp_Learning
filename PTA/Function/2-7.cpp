#include <iostream>
using namespace std;
void f(int n, char a, char b, char c)
{
    if (n == 1)
    {
        printf("%c->%c#", a, b);
    }
    else
    {
        f(n - 1, a, c, b);
        printf("%c->%c#", a, b);
        f(n - 1, c, b, a);
    }
}

int main()
{
    f(2, '1', '2', '3');
    return 0;
}