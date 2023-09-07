#include <iostream>

using namespace std;

class Complex
{
    int a, b;

public:
    Complex(int, int);
    void print(void)
    {
        cout << "The complex no. is " << a << " + " << b << "i" << endl;
    }
};

Complex ::Complex(int x, int y)
{
    a = x;
    b = y;
};

int main()
{
    Complex a(4, 9);           // Implicit Call
    Complex b = Complex(1, 5); // Explicit Call
    a.print();
    b.print();

    return 0;
}