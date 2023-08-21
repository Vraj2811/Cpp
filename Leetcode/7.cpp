#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int num = 0;

    while (n != 0)
    {
        if ((num > pow(2, 31) - 1) || (num < -pow(2, 31)))
        {
            cout << "Enter valid input";
        }

        num = 10 * num + (n % 10);
        n = n / 10;
    }

    cout << num << endl;

    return 0;
}