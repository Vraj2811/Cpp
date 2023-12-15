#include <iostream>
using namespace std;

void sort012(int *arr, int n)
{
    int low = 0;
    int mid = 0;
    int high = n - 1;

    while (mid <= high)
    {
        if (arr[mid] == 0)
        {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if (arr[mid] == 2)
        {
            swap(arr[high], arr[mid]);
            high--;
        }
        else
        {
            mid++;
        }
    }
}

int main()
{
    int arr[] = {1, 0, 2, 1, 0, 2, 1, 0};
    int n = 8;

    sort012(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
