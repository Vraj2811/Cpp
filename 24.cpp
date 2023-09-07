#include <iostream>

using namespace std;

class Employee
{
    int ID;
    static int count;

public:
    void setData(void)
    {
        cout << "Enter the ID" << endl;
        cin >> ID;
        count++;
    };
    void getData(void)
    {
        cout << "The ID of the employee is " << ID << endl;
    };
    static void getCount(void)
    {
        cout << "The value of count is " << count << endl;
    };
};

int Employee ::count;

int main()
{
    Employee Vraj, Shubham, Patil;
    Vraj.setData();
    Vraj.getData();
    Employee::getCount();

    Shubham.setData();
    Shubham.getData();
    Employee::getCount();

    Patil.setData();
    Patil.getData();
    Employee::getCount();

    return 0;
}