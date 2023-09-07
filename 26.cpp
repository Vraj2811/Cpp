#include <iostream>

using namespace std;

class Complex
{
    int a;
    int b;

public:
    void setData(int v1, int v2)
    {
        a = v1;
        b = v2;
    };
    void setSum(Complex m, Complex n)
    {
        a = m.a + n.a;
        b = m.b + n.b;
    };
    void Print(void)
    {
        cout << "The complex no. is " << a << " + " << b << "i" << endl;
    }
};

int main()
{
    Complex c1, c2, c3;
    c1.setData(5, 7);
    c2.setData(3, 4);
    c3.setSum(c1, c2);

    c1.Print();
    c2.Print();
    c3.Print();

    return 0;
}