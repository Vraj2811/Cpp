#include <iostream>
#include <limits.h>
using namespace std;

void PrintArray(int arr[], int size)
{
    cout << "The array is : ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int findUnique(int *arr, int size)
{
    int num = 0;
    for (int i = 0; i < size; i++)
    {
        num = num ^ arr[i];
    }
    return num;
}

int main()
{
    int size = 5;
    int arr[1000] = {3, 1, 4, 3, 4};

    PrintArray(arr, size);

    int num = findUnique(arr, size);

    cout << "The unique element is " << num << endl;

    return 0;
}