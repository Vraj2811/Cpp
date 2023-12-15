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

void SwapAlternative(int arr[], int size)
{
    for (int  i = 0; i < size-1; i+=2)
    {
        int temp = arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
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

    SwapAlternative(arr,size);

    PrintArray(arr, size);

    return 0;
}