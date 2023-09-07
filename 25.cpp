#include <iostream>

using namespace std;

class Employee
{
    int id;
    int salary;

public:
    void setID(void)
    {
        salary = 122;
        cout << "Enter the ID" << endl;
        cin >> id;
    };

    void getID(void)
    {
        cout << "The ID of the employee is " << id << endl;
    }
};

int main()
{
    Employee company[5];
    for (int i = 0; i < 5; i++)
    {
        company[i].setID();
        company[i].getID();
    }

    return 0;
}