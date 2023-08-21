#include <iostream>
using namespace std;

int main()
{
    const int arrayLength = 5;
    int arr[arrayLength];

    fill(arr, arr + arrayLength, 5);

    cout << arr[0] << endl;
    cout << arr[1] << endl;
    cout << arr[2] << endl;
    cout << arr[3] << endl;
    cout << arr[4] << endl;

    return 0;
}