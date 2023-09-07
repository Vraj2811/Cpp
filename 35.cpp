#include <iostream>

using namespace std;

class Simple
{
    int data1;
    int data2;

public:
    Simple(int a, int b = 6)
    {
        data1 = a;
        data2 = b;
    };
    void print(void)
    {
        cout << "The value of data1 is " << data1 << " and the value of data2 is " << data2 << endl;
    }
};

int main()
{
    Simple s1(5, 9);
    s1.print();

    Simple s2(5);
    s2.print();

    return 0;
}