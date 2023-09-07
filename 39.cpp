#include <iostream>
#include <string>

using namespace std;

class Employee // Base Class
{
public:
    int id;
    float salary;
    Employee(){};
    Employee(int INP)
    {
        id = INP;
        salary = 45000;
    };
};

/*
//Derived Class Syntax
class {{derived-class-name}} :{{ visibility-mode}} {{base-class-name}}
{
    class members/methods/etc.
}
*/

class Programmer : public Employee
{
public:
    string language = "C++";
    Programmer(int INP)
    {
        id = INP;
        salary = 50000;
    };
};

int main()
{
    Employee vraj(1), patil(2);
    cout << vraj.salary << endl;
    cout << patil.salary << endl;

    Programmer Shah(3);
    cout << Shah.language << endl;
    cout << Shah.salary << endl;

    return 0;
}