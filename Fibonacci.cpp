#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    int sum = 0;
    int a = 0, b = 1;
    cout << a << " ";
    cout << b << " ";
    for (int i = 0; i < n - 2; i++)
    {
        sum = a + b;
        cout << sum << " ";
        a = b;
        b = sum;
    }

    return 0;
}