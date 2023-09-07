#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;

    if (n >= -512 && n <= 511)
    {
        int ans = 0;
        int i = 0;

        if (n < 0)
        {
            n = 1024 + n;
        }

        while (i < 10)
        {
            int bit = n & 1;
            ans += pow(10, i) * bit;
            n = n >> 1;
            i += 1;
        }

        cout << "Binary representation: " << ans << endl;
    }
    else
    {
        cout << "Enter a number between -512 and 511." << endl;
    }

    return 0;
}
