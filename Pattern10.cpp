#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        for (int k = a; k > i + 1; k--)
        {
            cout << "  ";
        }
        for (int j = 1; j <= i + 1; j++)
        {
            cout << j << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << i - j + 1 << " ";
        }
        cout << endl;
    }

    return 0;
}