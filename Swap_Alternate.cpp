#include <iostream>
using namespace std;

void print(int arr[], int n)
{
    cout << "Printing the array" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl
         << endl;
}

void swap(int arr[], int n)
{
    for (int i = 0; i <= n - 2; i += 2)
    {
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
    }
}

int main()
{
    int arr1[10] = {1, 2, 3, 8, 9, 5, 1, 4, 9, 7};
    int arr2[5] = {1, 2, 3, 8, 9};

    print(arr1, 10);
    swap(arr1, 10);
    print(arr1, 10);

    print(arr2, 5);
    swap(arr2, 5);
    print(arr2, 5);

    return 0;
}