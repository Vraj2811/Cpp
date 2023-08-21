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

void reverse(int arr[], int n)
{
    cout << "Reversed array is" << endl;
    int start = 0;
    int end = n - 1;

    while (start <= end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start += 1;
        end -= 1;
    }

    cout << endl
         << endl;
}

int main()
{
    int arr[10] = {7, 1, 15, 23, 98, 5, 6, 1, 8, 5};
    int key;
    print(arr, 10);
    reverse(arr, 10);
    print(arr, 10);
    return 0;
}