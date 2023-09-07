#include <iostream>

using namespace std;

class Number
{
    int a;

public:
    Number()
    {
        a = 0;
    };
    Number(int num)
    {
        a = num;
    };
    Number(Number &obj)
    {
        cout << "Copy Constructor !!!" << endl;
        a = obj.a;
    };
    void display(void)
    {
        cout << "The number is " << a << endl;
    };
};

int main()
{
    Number x(45), y, z;
    x.display();
    y = x;
    y.display();
    z = Number(x);
    z.display();
    return 0;
}