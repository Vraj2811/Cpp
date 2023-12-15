#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void reverseArray(vector<int> &arr, int m)
{
    int i = m + 1;
    int j = arr.size() - 1;

    while (i <= j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int m = 3;

    cout << "Original Array: ";
    for (int num : arr)
    {
        cout << num << " ";
    }

    reverseArray(arr, m);

    cout << "\nReversed Array: ";
    for (int num : arr)
    {
        cout << num << " ";
    }

    return 0;
}
