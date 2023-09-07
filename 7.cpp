#include <iostream>

using namespace std;

int main()
{
    float x = 50;
    float &y = x;
    float z = x;
    cout << "Value of x is " << x << endl;
    cout << "Value of y is " << y << endl;
    cout << "Value of z is " << z << endl;

    x = 25;
    cout << "Value of x is " << x << endl;
    cout << "Value of y is " << y << endl;
    cout << "Value of z is " << z << endl;

    return 0;
}