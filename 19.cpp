#include <iostream>

using namespace std;

int Factorial(int x)
{
    if (x <= 1)
    {
        return 1;
    }
    else
    {
        return x * Factorial(x - 1);
    }
}

int Fibonacci(int x)
{
    if (x <= 1)
    {
        return 1;
    }
    else
    {
        return Fibonacci(x - 1) + Fibonacci(x - 2);
    }
}

int main()
{
    int num;
    cout << "Enter a no. ";
    cin >> num;
    cout << "The factorial of " << num << " is " << Factorial(num) << endl;
    cout << "The " << num << "th term of Fibonacci Series is " << Fibonacci(num) << endl;

    return 0;
}