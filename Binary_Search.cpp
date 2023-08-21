#include <iostream>
using namespace std;

int BinarySearch(int arr[], int low, int high, int key)
{
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (key == arr[mid])
        {
            return mid;
        }
        else if (key > arr[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int key;
    cin >> key;
    int arr[8] = {0, 0, 0, 0, 0, 0, 0, 0};
    int place = BinarySearch(arr, 0, 7, key);
    if (place == -1)
    {
        cout << key << " is not in the list" << endl;
    }
    else
    {
        cout << key << " is at " << place << " th place" << endl;
    }
}