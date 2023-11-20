#include <iostream>
using namespace std;
int func(int i)
{
    if (i > 1)
        return i * func(i - 1);
    else
        return 1;
}

int main()
{
    cout << func(5);
    return 0;
}