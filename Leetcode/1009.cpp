#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the no. : ";
    cin >> n;
    int m = n;
    int mask = 0;

    if (n == 0)
    {
        cout << "1" << endl;
        return 0;
    }

    while (m != 0)
    {
        mask = (mask << 1) | 1;
        m = m >> 1;
    }
    cout << (~n & mask) << endl;

    return 0;
}
