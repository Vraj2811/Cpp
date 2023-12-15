#include <iostream>
using namespace std;

bool isSorted(int arr[], int n, int size)
{
    if (n + 1 == size)
    {
        return true;
    }
    if (arr[n] < arr[n - 1])
    {
        return false;
    }
    isSorted(arr, n + 1, size);
}

int main()
{
    int n;
    cin >> n;

    int arr[1000];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    bool is_sort = isSorted(arr, 1, n);
    if (is_sort == 0)
    {
        cout << "The array is not sorted" << endl;
    }
    else
    {
        cout << "The array is sorted" << endl;
    }

    return 0;
}