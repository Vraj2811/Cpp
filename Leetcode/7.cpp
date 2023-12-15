#include <iostream>
#include <limits>
using namespace std;

int reverse(int x)
{
    int num = 0;
    while (x != 0)
    {
        if (num <= INT_MAX / 10 && num >= INT_MIN / 10)
        {
            int a = x % 10;
            num = num * 10 + a;
            x = x / 10;
        }
        else
        {
            return 0;
        }
    }
    return num;
}

int main()
{
    int a;
    cin >> a;
    int ans = reverse(a);
    cout << ans << endl;
    return 0;
}
