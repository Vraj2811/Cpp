#include <iostream>
using namespace std;

void PrintArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void SortOne(int arr[], int n)
{
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        while (arr[i] == 0 && i < j)
        {
            i++;
        }
        while (arr[j] == 1 && i < j)
        {
            j--;
        }
        if (arr[i] == 1 && arr[j] == 0 && i < j)
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
}

int main()
{
    int arr[8] = {1, 1, 0, 0, 1, 0, 1, 0};

    PrintArr(arr, 8);
    SortOne(arr, 8);
    PrintArr(arr, 8);

    return 0;
}