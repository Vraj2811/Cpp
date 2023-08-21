#include <iostream>
using namespace std;

int main()
{
    int a = 5;

    switch (a)
    {
    case 1:
        cout << "One" << endl;
    case 5:
        cout << "Five" << endl;
    default:
        cout << "Default" << endl;
    }

    return 0;
}