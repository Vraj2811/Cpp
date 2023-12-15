#include <iostream>
using namespace std;

int modularExponentiation(int x, int n, int m)
{
    long long int ans = 1;
    while (n > 0)
    {
        if (n & 1)
        {
            ans = (1LL * ans * (x % m)) % m;
        }
        x = (1LL * (x % m) * (x % m)) % m;
        n = n >> 1;
    }
    return ans;
}

int main()
{
    int x, n, m;
    cout << "Enter base (x): ";
    cin >> x;
    cout << "Enter exponent (n): ";
    cin >> n;
    cout << "Enter modulus (m): ";
    cin >> m;

    int result = modularExponentiation(x, n, m);
    cout << "Result: " << result << endl;

    return 0;
}
