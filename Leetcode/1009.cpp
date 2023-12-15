#include <iostream>
#include <math.h>
using namespace std;

int bitwiseComplement(int n)
{
    if (n == 0)
    {
        return 1;
    }
    int dig = 0;
    int temp = n;
    while (temp != 0)
    {
        dig += 1;
        temp = temp / 2;
    }

    int ans = ~n & ((int)round(pow(2, dig)) - 1);
    return ans;
}

int bitwiseComplement1(int n)
{
    if (n == 0)
    {
        return 1;
    }
    int m = n;
    int mask = 0;

    while (m != 0)
    {
        mask = (mask << 1) | 1;
        m = m >> 1;
    }

    int ans = (~n & mask);
    return ans;
}

int main()
{
    int a;
    cin >> a;
    int ans = bitwiseComplement(a);
    cout << ans << endl;
    int ans1 = bitwiseComplement1(a);
    cout << ans1 << endl;

    return 0;
}
