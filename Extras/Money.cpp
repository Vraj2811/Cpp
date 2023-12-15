#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter the Total Amount: ";
    cin >> a;

    switch (a)
    {
    default:
        cout<<"";
    case 100:
        cout << a / 100 << " Notes of Denomination = 100" << endl;
        a = a % 100;
    case 50:
        cout << a / 50 << " Notes of Denomination = 50" << endl;
        a % 50;
    case 20:
        cout << a / 20 << " Notes of Denomination = 20" << endl;
        a = a % 20;
    case 1:
        cout << a << " Notes of Denomination = 1" << endl;
    }

    return 0;
}