#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;
    int count = 65;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << char(count) << " ";
            count++;
        }
        cout << endl;
    }

    return 0;
}