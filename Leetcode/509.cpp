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
    cout << "Enter the value of n: ";
    cin >> n;

    if (n < 0)
    {
        cout << "Invalid input. Please enter a non-negative integer." << endl;
        return 1;
    }

    cout << "Fibonacci(" << n << ") = " << fib(n) << endl;

    return 0;
}
