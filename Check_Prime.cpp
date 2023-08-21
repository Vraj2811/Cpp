#include <iostream>
using namespace std;

int main()
{
    int number;
    cin >> number;

    if (number <= 1)
    {
        cout << "Enter a no. greater than 1" << endl;
        return 1;
    }

    for (int i = 2; i * i <= number; ++i)
    {
        if (number % i == 0)
        {
            cout << "Not Prime" << endl;
            return 0;
        }
    }

    cout << "Prime" << endl;
    return 0;
}
