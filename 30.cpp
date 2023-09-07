#include <iostream>

using namespace std;

class c2;

class c1
{
    int val;

public:
    void indata(int a)
    {
        val = a;
    };

    void display(void)
    {
        cout << val << endl;
    };
    friend void exchange(c1 &, c2 &);
};

class c2
{
    int value;

public:
    void indata(int a)
    {
        value = a;
    };

    void display(void)
    {
        cout << value << endl;
    };

    friend void exchange(c1 &, c2 &);
};

void exchange(c1 &x, c2 &y)
{
    int temp = x.val;
    x.val = y.value;
    y.value = temp;
};

int main()
{
    c1 data1;
    c2 data2;
    data1.indata(5);
    data2.indata(10);
    cout << "The values before exchanging are " << endl;
    data1.display();
    data2.display();

    exchange(data1, data2);

    cout << "The values after exchanging are " << endl;
    data1.display();
    data2.display();

    return 0;
}