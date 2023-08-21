#include <iostream>
#include <string.h>
using namespace std;

string Check(int a)
{
    if (a % 2 == 0)
    {
        return "Even";
    }
    else
    {
        return "Odd";
    }
}

int main()
{
    int x;
    cout << "Enter the no." << endl;
    cin >> x;

    cout << x << " is " << Check(x) << endl;

    return 0;
}