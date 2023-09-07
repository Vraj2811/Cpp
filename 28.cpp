#include <iostream>

using namespace std;

class Complex;

class Calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumRealComplex(Complex, Complex);
    int sumImgComplex(Complex, Complex);
};

class Complex
{
    int a, b;

    // Individually declaring functions as friends
    // friend int Calculator ::sumRealComplex(Complex m, Complex n);
    // friend int Calculator ::sumImgComplex(Complex m, Complex n);

    // Declaring entire class as friends
    friend class Calculator;

public:
    void setData(int v1, int v2)
    {
        a = v1;
        b = v2;
    };

    void Print(void)
    {
        cout << "The complex no. is " << a << " + " << b << "i" << endl;
    }
};

int Calculator ::sumRealComplex(Complex m, Complex n)
{
    return (m.a + n.a);
};
int Calculator ::sumImgComplex(Complex m, Complex n)
{
    return (m.b + n.b);
};

int main()
{
    Complex c1, c2;
    c1.setData(5, 7);
    c2.setData(3, 4);

    c1.Print();
    c2.Print();

    Calculator calc;
    int Reresult = calc.sumRealComplex(c1, c2);
    int Imgresult = calc.sumImgComplex(c1, c2);
    cout << "The sum of real parts of c1 and c2 is " << Reresult << endl;
    cout << "The sum of imaginary parts of c1 and c2 is " << Imgresult << endl;

    return 0;
}