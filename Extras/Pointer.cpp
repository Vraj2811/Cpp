#include <iostream>
using namespace std;

int main()
{
    int num = 5;
    cout << "The no. is " << num << endl;
    cout << "The address of num is " << &num << endl;
    cout << "The size of num is " << sizeof(num) << endl;

    int *ptr = &num;
    cout << "The value of ptr is " << ptr << endl;
    cout << "The value at ptr is " << *ptr << endl;
    cout << "The size of ptr is " << sizeof(ptr) << endl;

    cout << endl;

    double db = 4.2;
    cout << "The db is " << db << endl;
    cout << "The address of db is " << &db << endl;
    cout << "The size of db is " << sizeof(db) << endl;

    double *ptr1 = &db;
    cout << "The value of ptr1 is " << ptr1 << endl;
    cout << "The value at ptr1 is " << *ptr1 << endl;
    cout << "The size of ptr1 is " << sizeof(ptr1) << endl;

    cout << endl;

    cout << "Arrays :" << endl;
    int arr[5] = {5, 8, 6, 1, 2};
    cout << "The address of the array is = address of first element is " << arr << endl;
    cout << "The address of first element is " << &arr[0] << endl;
    cout << "The value of the first element is " << arr[0] << endl;
    cout << "The value of the first element is " << *arr << endl;
    cout << arr << endl;

    return 0;
}