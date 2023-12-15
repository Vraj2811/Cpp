#include <iostream>
#include <vector>
using namespace std;

void PrintArray(vector<int>& arr)
{
    cout << "The array is: ";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int peakIndexInMountainArray(vector<int>& arr) {
    int start = 0;
    int end = arr.size() - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid - 1] < arr[mid] && arr[mid] > arr[mid + 1])
        {
            return mid;
        }
        else if (arr[mid - 1] < arr[mid] && arr[mid] < arr[mid + 1])
        {
            start = mid + 1;
        }
        else if (arr[mid - 1] > arr[mid] && arr[mid] > arr[mid + 1])
        {
            end = mid - 1;
        }
    }
    return -1; // Peak not found
}

int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    cout << "Enter the elements of the array in mountain order:" << endl;
    vector<int> arr(size);

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    PrintArray(arr);

    int peakIndex = peakIndexInMountainArray(arr);
    if (peakIndex != -1)
    {
        cout << "Peak element index: " << peakIndex << endl;
        cout << "Peak element value: " << arr[peakIndex] << endl;
    }
    else
    {
        cout << "Peak element not found in the array." << endl;
    }

    return 0;
}
