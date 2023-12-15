#include <iostream>
#include <vector>
using namespace std;

int search(vector<int> &arr, int n, int k)
{
    int low = 0;
    int high = n - 1;

    while (low < high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] > arr[high])
        {
            low = mid + 1;
        }
        else
        {
            high = mid;
        }
    }

    if (arr[low] <= k && k <= arr[n - 1])
    {
        int start = low;
        int end = n - 1;
        while (start <= end)
        {
            int mid = start + (end - start) / 2;
            if (arr[mid] == k)
            {
                return mid;
            }
            else if (arr[mid] > k)
            {
                end = mid - 1;
            }
            else if (arr[mid] < k)
            {
                start = mid + 1;
            }
        }
        return -1;
    }

    int start = 0;
    int end = low - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == k)
        {
            return mid;
        }
        else if (arr[mid] > k)
        {
            end = mid - 1;
        }
        else if (arr[mid] < k)
        {
            start = mid + 1;
        }
    }
    return -1;
}

int main()
{
    vector<int> arr = {4, 5, 6, 7, 0, 1, 2};
    int n = arr.size();
    int k = 0;
    int result = search(arr, n, k);

    if (result != -1)
    {
        cout << "Element " << k << " found at index " << result << endl;
    }
    else
    {
        cout << "Element " << k << " not found in the array." << endl;
    }

    return 0;
}
