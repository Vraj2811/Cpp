#include <iostream>

using namespace std;

class Y;

class X
{
    int data;

public:
    void setValue(int value)
    {
        data = value;
    };
    friend void add(X, Y);
};

class Y
{
    int num;

public:
    void setValue(int value)
    {
        num = value;
    };
    friend void add(X, Y);
};

void add(X m, Y n)
{
    cout << "The sum of datas of objects of X and Y is " << m.data + n.num << endl;
};

int main()
{
    X a;
    a.setValue(3);
    Y b;
    b.setValue(6);

    add(a, b);

    return 0;
}