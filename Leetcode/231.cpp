#include <iostream>
using namespace std;

bool isPowerOfTwo(int n)
{
    if (n <= 0)
    {
        return false;
    }
    return (n & (n - 1)) == 0;
}

int main()
{
    int a;
    cin >> a;
    int ans = isPowerOfTwo(a);
    cout << ans << endl;
    return 0;
}
