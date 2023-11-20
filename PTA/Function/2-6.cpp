#include <iostream>
using namespace std;
void f(int n);

int main()
{
    f(27);
    return 0;
}

void f(int n)
{
    if (n < 5)
    {
        printf("%d", n);
    }
    else
    {
        printf("%d", n % 5);
        f(n / 5);
    }
}