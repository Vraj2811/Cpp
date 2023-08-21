#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int count = 0;

    if (n <= 0)
    {
        cout << "0" << endl;
        return 0;
    }

    cout << ((n & (n - 1)) == 0);

    return 0;
}