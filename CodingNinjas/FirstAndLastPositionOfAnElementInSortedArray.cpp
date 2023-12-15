#include <iostream>
#include <vector>

using namespace std;

pair<int, int> firstAndLastPosition(vector<int> &arr, int n, int k)
{
    int start = 0;
    int end = n - 1;
    int first = -1;

    // First occurrence of k
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == k)
        {
            first = mid;
            end = mid - 1;
        }
        else if (arr[mid] > k)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }

    start = 0;
    end = n - 1;
    int last = -1;

    // Last occurrence of k
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == k)
        {
            last = mid;
            start = mid + 1;
        }
        else if (arr[mid] > k)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }

    return make_pair(first, last);
}

int main()
{
    vector<int> arr = {1, 2, 2, 2, 3, 4, 4, 5, 6};
    int n = arr.size();
    int k = 2;

    pair<int, int> result = firstAndLastPosition(arr, n, k);

    if (result.first != -1)
    {
        cout << "First occurrence of " << k << " is at index " << result.first << endl;
        cout << "Last occurrence of " << k << " is at index " << result.second << endl;
    }
    else
    {
        cout << "Element " << k << " not found in the array." << endl;
    }

    return 0;
}
