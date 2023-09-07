#include <iostream>

using namespace std;

/*
void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a = 4, b = 5;
    cout << "Value of a is " << a << "and value of b is " << b << endl;
    swap(a, b);
    cout << "Value of a is " << a << "and value of b is " << b << endl;

    return 0;
}

// This code will not work as there is no change in values of Actual arguments
*/

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void swap1(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

int main()
{
    int a = 4, b = 5;
    cout << "Value of a is " << a << " and value of b is " << b << endl;
    // swap(&a, &b); // This will swap using pointer reference
    swap(a, b); // This will swap using reference variable
    cout << "Value of a is " << a << " and value of b is " << b << endl;

    return 0;
}