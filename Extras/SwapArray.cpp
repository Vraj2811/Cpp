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

void SwapArray(int arr[], int size)
{
    int i =0;
    int j=size-1;
    while (i<=j)
    {
        int temp =arr[j];
        arr[j]=arr[i];
        arr[i]=temp;
        i++;
        j--;
    }
    
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

    SwapArray(arr,size);

    PrintArray(arr, size);

    return 0;
}