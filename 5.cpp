// There are two types of header files:
// 1. System header files: It comes with the compiler
// 2. User defined header files: It is written by the programmer
// #include "this.h" //--> This will produce an error if this.h is no present in the current directory

#include <iostream>

using namespace std;

int main()
{
    cout << "Operators in C++" << endl
         << endl;

    cout << "1) Arithmetic Operator" << endl;
    int a = 4, b = 5;
    cout << "The value of a + b is " << a + b << endl;
    cout << "The value of a - b is " << a - b << endl;
    cout << "The value of a * b is " << a * b << endl;
    cout << "The value of a / b is " << a / b << endl;
    cout << "The value of a % b is " << a % b << endl;
    cout << "The value of a++ is " << a++ << endl; // first print a then add 1
    cout << "The value of a-- is " << a-- << endl;
    cout << "The value of ++a is " << ++a << endl; // first add 1 then print a
    cout << "The value of --a is " << --a << endl
         << endl;

    cout << "2) Assignment Operators --> used to assign values to variables" << endl
         << endl;
    int x = 3, y = 9;
    char d = 'd';

    cout << "3) Comparision Operator" << endl;
    cout << "The value of a == b is " << (a == b) << endl;
    cout << "The value of a != b is " << (a != b) << endl;
    cout << "The value of a < b is " << (a < b) << endl;
    cout << "The value of a > b is " << (a > b) << endl;
    cout << "The value of a <= b is " << (a <= b) << endl;
    cout << "The value of a >= b is " << (a >= b) << endl
         << endl;

    cout << "4) Logical Operator" << endl;
    cout << "The value of ((a == b) && (a < b)) is " << ((a == b) && (a < b)) << endl;
    cout << "The value of ((a == b) || (a < b)) is " << ((a == b) || (a < b)) << endl;
    cout << "The value of (!(a == b)) is " << (!(a == b)) << endl;

    return 0;
}