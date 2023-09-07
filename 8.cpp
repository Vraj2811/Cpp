#include <iostream>

using namespace std;

int main()
{
    /*
    int a = 5;
    cout << "The value of a was " << a << " ";
    a = 10;
    cout << "The value of a is " << a << endl;

    return 0;

    // Output : 5 10
    */

    const int a = 5;
    cout << "The value of a was " << a << endl;
    // a = 10; //This will give error as a is given a const value
    cout << "The value of a is " << a << endl;

    return 0;
}