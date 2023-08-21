#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int sum = 0;
    int product = 1;

    while (n != 0)
    {
        sum += (n % 10);
        product *= (n % 10);
        n = n / 10;
    }

    int ans = product - sum;
    cout << ans << endl;

    return 0;
}