#include <iostream>
using namespace std;

int main()
{
    int a, b;
    char operation;
    cout << "Enter the first no. " << endl;
    cin >> a;
    cout << "Enter the second no. " << endl;
    cin >> b;
    cout << "Enter the operation" << endl;
    cin >> operation;
    switch (operation)
    {
    case '+':
        cout << a << " + " << b << " = " << a + b << endl;
        break;

    case '*':
        cout << a << " * " << b << " = " << a * b << endl;
        break;

    case '-':
        cout << a << " - " << b << " = " << a - b << endl;
        break;

    case '%':
        cout << a << " % " << b << " = " << a % b << endl;
        break;
    }

    return 0;
}