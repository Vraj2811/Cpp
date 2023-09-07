#include <iostream>

using namespace std;

int main()
{
    int marks[] = {23, 45, 78, 12};
    /*
    cout << "value of marks[0] " << marks[0] << endl;
    cout << "value of marks[1] " << marks[1] << endl;
    cout << "value of marks[2] " << marks[2] << endl;
    cout << "value of marks[3] " << marks[3] << endl;
    cout << "address of marks[0] " << &marks[0] << endl;
    cout << "address of marks[1] " << &marks[1] << endl;
    cout << "address of marks[2] " << &marks[2] << endl;
    cout << "address of marks[3] " << &marks[3] << endl;
    */

    for (int i = 0; i < 4; i++)
    {
        cout << "value of marks[" << i << "] is " << marks[i] << endl;
        cout << "address of marks[" << i << "] is " << &marks[i] << endl;
    }
    cout << endl;
    int *p = marks;
    for (int i = 0; i < 4; i++)
    {
        cout << "value of marks[" << i << "] is " << *(p + i) << endl;
        cout << "address of marks[" << i << "] is " << p + i << endl;
    }

    return 0;
}