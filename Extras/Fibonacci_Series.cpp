#include <iostream>
using namespace std;

int fib(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    return fib(n - 1) + fib(n - 2);
}

int main()
{
    int n;
    cin >> n;

    cout << "0"
         << " ";
    cout << "1"
         << " ";

    int a = 0;
    int b = 1;

    for (int i = 1; i < n; i++)
    {
        int temp = a;
        a = b;
        b = b + temp;
        cout << b << " ";
    }
    cout << endl;

    cout << "The " << n << " th no. is " << fib(n) << endl;

    return 0;
}