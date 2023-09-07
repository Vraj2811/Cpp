#include <iostream>

using namespace std;

class Complex
{
    int a, b;

public:
    Complex(void);
    void print(void)
    {
        cout << "The complex no. is " << a << " + " << b << "i" << endl;
    }
};

Complex ::Complex(void)
{
    a = 10;
    b = 5;
};

int main()
{
    Complex c;
    c.print();
    
    return 0;
}

/*
Characteristics of Constructors
1. It should be declared in the public section of the class
2. They are automatically invoked whenever the object is created
3. They cannot return values and do not have return types
4. It can have default arguments
5. We cannot refer to their address
*/