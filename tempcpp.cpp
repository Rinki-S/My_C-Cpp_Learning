#include <iostream>
using namespace std;

int fibonacci(int n)
{
    if (n == 0 || n == 1)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}
int main(void)
{
    for (int i = 1; i <= 5; i++)
    {
        cout << fibonacci(i) << " ";
    }
    return 0;
}