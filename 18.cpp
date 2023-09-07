#include <iostream>

using namespace std;

/*
// Inline Fxn
inline int Product(int a, int b)
{
    return a * b;
}

int main()
{
    int a, b;
    cout << "Enter the values of a and b" << endl;
    cin >> a >> b;
    cout << "Value is " << Product(a, b) << endl;
    cout << "Value is " << Product(a, b) + 2 << endl;
    cout << "Value is " << Product(a, b) - 8 << endl;
    cout << "Value is " << Product(a, b) / 3 << endl;
    cout << "Value is " << Product(a, b) / 5 << endl;

    return 0;
}
*/

/*
// Static Variables
int Product(int a, int b)
{
    int static c = 0;
    c += 1;
    return a * b + c;
}

int main()
{
    int a, b;
    cout << "Enter the values of a and b" << endl;
    cin >> a >> b;
    cout << "Value is " << Product(a, b) << endl;
    cout << "Value is " << Product(a, b) << endl;
    cout << "Value is " << Product(a, b) << endl;
    cout << "Value is " << Product(a, b) << endl;
    cout << "Value is " << Product(a, b) << endl;

    return 0;
}
*/

float MoneyReceived(float currentMoney, float rate = 4)
{
    return currentMoney * (1 + rate / 100);
}

int main()
{
    int money = 100000;
    cout << "If you have " << money << " in your account, you will get " << MoneyReceived(money) << " after 1 year" << endl;
    cout << "For VIP, If you have " << money << " in your account, you will get " << MoneyReceived(money,10) << " after 1 year" << endl;

    return 0;
}