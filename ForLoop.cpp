#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the no. ";

    cin >> n;

    /*
    for (int i = 1; i <= n; i++)
    {
        cout << i << endl;
    }
    */

    int i = 1;
    for (;;)
    {
        if (i <= n)
        {
            cout << i << endl;
        }
        else
        {
            break;
        }

        i++;
    }

    cout << endl;

    for (int a = 0, b = 2; a < n && b < n; a++, b++)
    {
        cout << a << " " << b << endl;
    }

    return 0;
}