#include <iostream>

using namespace std;

int count = 0;

class num
{
public:
    num()
    {
        count++;
        cout << "The constructor is called for the object number " << count << endl;
    }
    ~num()
    {
        cout << "The destructor is called for the object number " << count << endl;
        count--;
    }
};

int main()
{
    cout << "We are inside our main fxn" << endl;
    cout << "We are creating our first object n1" << endl;
    num n1;
    {
        cout << "Entering the block" << endl;
        cout << "Creating 2 more objects" << endl;
        num n2, n3;
        cout << "Exiting the block" << endl;
    }
    return 0;
}