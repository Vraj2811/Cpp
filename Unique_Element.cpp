#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {2, 3, 1, 6, 2, 6, 3};

    int x = 0;
    for (int i = 0; i < 10; i++)
    {
        x = x ^ arr[i];
    }

    cout << "THe unique element is " << x << endl;

    return 0;
}