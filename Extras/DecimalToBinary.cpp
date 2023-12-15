#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int temp = n;
    if (n < 0)
    {
        n = -n;
    }

    int ans = 0;
    int i = 0;

    while (n != 0)
    {
        int bit = n & 1;
        ans = (bit * (int)round(pow(10, i))) + ans;
        n = n >> 1;
        i++;
    }

    if (temp >= 0)
    {
        cout << "The ans is " << ans << endl;
    }
    else
    {
        cout << "The ans is " << -ans << endl;
    }
    

    return 0;
}