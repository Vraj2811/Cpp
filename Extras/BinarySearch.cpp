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

int BinarySearch(int arr[], int start, int end, int ele)
{
    while (start <= end)
    {
        int mid = end - (end - start) / 2;
        if (arr[mid] == ele)
        {
            return mid;
        }
        else if (arr[mid] > ele)
        {
            end = mid - 1;
        }
        else if (arr[mid] < ele)
        {
            start = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int size;
    cin >> size;
    cout << "Enter the elements of the array in an increasing order" << endl;
    int arr[1000];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    PrintArray(arr, size);

    int search;
    cout << "Enter the Element ";
    cin >> search;

    int a = BinarySearch(arr, 0, size - 1, search);
    if (a != -1)
    {
        cout << "Element " << search << " is at index " << a << "." << endl;
    }
    else
    {
        cout << "Element " << search << " not found in the array." << endl;
    }

    return 0;
}