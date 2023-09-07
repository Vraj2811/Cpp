#include <iostream>

using namespace std;

int main()
{
    int age;
    cout << "Enter your age : ";
    cin >> age;

    /*
    if (age>=18)
    {
        cout<<"You can vote"<<endl;
    }
    else if (age>0)
    {
        cout<<"You are still young to vote"<<endl;
    }
    else
    {
        cout<<"Stop Joking"<<endl;
    }

    return 0;
    */

    switch (age)
    {
    case 18:
        cout << "You can vote from now on" << endl;
        break; // If we do not keep the break. It will print all the things from this if the input is of 18

    case 20:
        cout << "You can not vote" << endl;
        break;
    }

    return 0;
}