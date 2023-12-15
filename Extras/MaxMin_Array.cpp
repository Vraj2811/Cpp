#include <iostream>
#include <limits.h>
using namespace std;

int Max(int arr[], int size)
{
    int max = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}
int Min(int arr[], int size)
{
    int min = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

void PrintArray(int arr[], int size)
{
    cout << "The array is : ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int size;
    cin >> size;

    int arr[1000];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    PrintArray(arr, size);

    int max = Max(arr, size);
    int min = Min(arr, size);

    cout << "The Max in the array is " << max << endl;
    cout << "The Min in the array is " << min << endl;

    return 0;
}