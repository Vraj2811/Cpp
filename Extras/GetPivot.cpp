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

int GetPivot(int arr[], int n) {
    int low = 0;
    int high = n - 1;

    while (low < high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] > arr[high]) {
            low = mid + 1;
        } else {
            high = mid;
        }
    }

    return low;
}


int main()
{
    int size;
    cin >> size;
    cout << "Enter the elements of the array in an rotated order" << endl;
    int arr[1000];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    PrintArray(arr, size);

    int a = GetPivot(arr, size);

    cout << "The index of pivot element is " << a << endl;

    return 0;
}