#include <iostream>
#include <string>

using namespace std;

struct employee
{
    int ID;
    string surname;
    float salary;
};

typedef struct bloodbank
{
    int age;
    string Bg;
    float Mob;
} bb;

union money
{
    int rice;     // 4
    char car;     // 1
    float pounds; // 4
};

int main()
{
    struct employee Vraj;
    Vraj.ID = 1;
    Vraj.surname = "Shah";
    Vraj.salary = 5000;

    cout << Vraj.surname << endl;

    bb Shah;
    Shah.age = 18;
    Shah.Bg = "A+";
    Shah.Mob = 9484638348;

    cout << Shah.Mob << endl;

    union money m1;
    m1.rice = 34;
    cout << m1.rice << endl;
    m1.car = 'c';
    cout << m1.rice << endl;
    cout << m1.car << endl;

    enum Meal
    {
        Breakfast,
        Lunch,
        Dinner
    };
    cout << Breakfast << endl;
    cout << Lunch << endl;
    cout << Dinner << endl;

    return 0;
}
