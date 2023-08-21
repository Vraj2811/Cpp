#include <iostream>
using namespace std;

int factorial(int x)
{
    int ans = 1;
    for (int i = 1; i < x + 1; i++)
    {
        ans *= i;
    }
    return ans;
}

void nCr(int n, int r)
{
    if ((n >= r) && (r >= 0))
    {
        cout << "The value of nCr is " << factorial(n) / (factorial(r) * factorial(n - r)) << endl;
    }
    else
    {
        cout << "Enter valid input" << endl;
    }
}

int main()
{
    int n, r;
    cout << "Enter the value of n" << endl;
    cin >> n;
    cout << "Enter the value of r" << endl;
    cin >> r;

    nCr(n, r);

    return 0;
}