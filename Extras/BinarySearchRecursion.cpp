#include <iostream>
using namespace std;

int BinarySearch(int arr[], int start, int end, int target)
{
    int mid = start + (end - start) / 2;
    if (start > end)
    {
        return -1;
    }
    if (arr[mid] == target)
    {
        return mid;
    }
    else if (arr[mid] > target)
    {
        return BinarySearch(arr, start, end - 1, target);
    }
    else if (arr[mid] < target)
    {
        return BinarySearch(arr, start + 1, end, target);
    }
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

    cout << "Enter a no. to be found" << endl;
    int a;
    cin >> a;

    int found = BinarySearch(arr, 0, n - 1, a);

    cout << a << " is found at " << found << " position" << endl;

    return 0;
}