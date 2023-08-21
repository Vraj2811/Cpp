#include <iostream>
using namespace std;

int main()
{
    int i = 5;
    int a = i++; // First value is assigned and then 1 is added

    cout << "Value of a is " << a << endl;
    cout << "Value of i is " << i << endl;

    int j = 5;
    int b = ++j; // First then 1 is added and value is assigned

    cout << "Value of b is " << b << endl;
    cout << "Value of j is " << j << endl;

    return 0;
}