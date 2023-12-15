#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter First No. ";
    cin >> a;
    cout << "Enter Second No. ";
    cin >> b;
    char op;
    cout << "Enter the operator ( + , - , * , / , % ): ";
    cin >> op;

    switch (op)
    {
    case '+':
        cout << a << " + " << b << " = " << a + b << endl;
        break;
    case '-':
        cout << a << " - " << b << " = " << a - b << endl;
        break;
    case '*':
        cout << a << " * " << b << " = " << a * b << endl;
        break;
    case '/':
        cout << a << " / " << b << " = " << a / b << endl;
        break;
    case '%':
        cout << a << " % " << b << " = " << a % b << endl;
        break;

    default:
        break;
    }

    return 0;
}