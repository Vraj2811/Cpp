#include <iostream>
using namespace std;

int findComplement(int n)
{
    int dig = 1;
    int temp = n;
    while (temp != 1)
    {
        dig += 1;
        temp = temp / 2;
    }
    int result = 1;

    for (int i = 0; i < dig; i++)
    {
        result *= 2;
    }
    int ans = ~n & result - 1;
    return ans;
}

int main()
{
    int a;
    cin >> a;
    int ans = findComplement(a);
    cout << ans << endl;
    return 0;
}
