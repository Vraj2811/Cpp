#include <iostream>
using namespace std;

void power(int a, int b)
{
    int ans = 1;

    for (int i = 0; i < b; i++)
    {
        ans *= a;
    }

    cout << a << " ^ " << b << " = " << ans;
}

int main()
{
    int a, b;
    cout << "Enter a" << endl;
    cin >> a;
    cout << "Enter b" << endl;
    cin >> b;
    power(a, b);

    return 0;
}