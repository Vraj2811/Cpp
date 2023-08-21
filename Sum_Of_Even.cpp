#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    if (n <= 0)
    {
        cout << "Please enter a positive integer." << endl;
        return 1;
    }

    int sum = 0;
    int evenNumber = 2;

    for (int i = 0; i < n; ++i)
    {
        sum += evenNumber;
        evenNumber += 2;
    }

    cout << "The sum of the first " << n << " even numbers is " << sum << endl;

    return 0;
}
