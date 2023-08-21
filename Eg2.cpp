#include <iostream>
using namespace std;

int main()
{
    if (true)
    {
        int b = 5;
        cout << b << endl;
    }

    // cout << b << endl; //This will give error as the scope of the var is only till the end of if statement.

    return 0;
}