#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a;
    cin >> a;

    for (int i = 0; i < a; i++)
    {
        for (int j = 1; j <= a; j++)
        {
            cout << setw(2) << j + i * a << " ";
        }
        cout << endl;
    }

    return 0;
}