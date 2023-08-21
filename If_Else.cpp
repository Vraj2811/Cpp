#include <iostream>
using namespace std;

int main()
{
    int ch = cin.get();

    if (ch >= 48 && ch <= 57)
    {
        cout << "This is Numeric" << endl;
    }

    else if (ch >= 97 && ch <= 122)
    {
        cout << "This is Lowercase" << endl;
    }

    else if (ch >= 65 && ch <= 90)
    {
        cout << "This is Uppercase" << endl;
    }

    return 0;
}