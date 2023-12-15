#include <iostream>
using namespace std;

int subtractProductAndSum(int n)
{
    int sum = 0;
    int prod = 1;

    while (n > 0)
    {
        int a = n % 10;
        sum += a;
        prod *= a;
        n = n / 10;
    }
    return (prod - sum);
}

int main()
{
    int a;
    cin >> a;
    int ans = subtractProductAndSum(a);
    cout << ans << endl;
    return 0;
}