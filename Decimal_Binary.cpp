#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the no. : ";
    cin >> n;
    if (n < 1024 && n >= 0)
    {
        int ans = 0;
        int i = 0;

        while (n != 0)
        {
            int bit = n & 1;
            ans += pow(10, i) * bit;
            n = n >> 1;
            i += 1;
        }
        cout << ans << endl;
    }

    else
    {
        cout << "Enter a no. between 0 and 1023";
    }

    return 0;
}