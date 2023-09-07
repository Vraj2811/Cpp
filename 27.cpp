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

    friend Complex sum(Complex M, Complex N);

    void Print(void)
    {
        cout << "The complex no. is " << a << " + " << b << "i" << endl;
    }
};

Complex sum(Complex m, Complex n)
{
    Complex p;
    p.setData(m.a + n.a, m.b + n.b);
    return p;
}

int main()
{
    Complex c1, c2, c3;
    c1.setData(5, 7);
    c2.setData(3, 4);
    c3 = sum(c1, c2);

    c1.Print();
    c2.Print();
    c3.Print();

    return 0;
}

/*
Properties of friend functions
1. Not in the scope of class
2. since it is not in the scope of the class, it cannot be called from the object of that class. c1.sumComplex() == Invalid
3. Can be invoked without the help of any object
4. Usually contans the objects as arguments
5. Can be declared inside public or private section of the class
6. It cannot access the members directly by their names and need object_name.member_name to access any member.
*/