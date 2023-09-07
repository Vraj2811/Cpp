#include <iostream>

using namespace std;

class Complex
{
    int a, b;

public:
    Complex()
    {
        a = 0;
        b = 0;
    };
    Complex(int x, int y)
    {
        a = x;
        b = y;
    };
    Complex(int x)
    {
        a = x;
        b = 0;
    };

    void print(void)
    {
        cout << "The complex no. is " << a << " + " << b << "i" << endl;
    };
};

int main()
{
    Complex c1(3, 9);
    c1.print();

    Complex c2(5);
    c2.print();

    Complex c3;
    c3.print();

    return 0;
}