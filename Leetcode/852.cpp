#include <iostream>
using namespace std;

int PeakSearch(int arr[], int low, int high)
{
    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (mid > 0 && mid < high - 1)
        {
            if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1])
            {
                return mid;
            }
            else if (arr[mid] < arr[mid - 1])
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        else if (mid == 0)
        {
            if (arr[mid] > arr[mid + 1])
            {
                return mid;
            }
            else
            {
                low = mid + 1;
            }
        }
        else if (mid == high - 1)
        {
            if (arr[mid] > arr[mid - 1])
            {
                return mid;
            }
            else
            {
                high = mid - 1;
            }
        }
    }
    return -1;
}

int main()
{
    int arr[5] = {0, 7, 8, 9, 2};
    int place = PeakSearch(arr, 0, 4);

    if (place == -1)
    {
        cout << "No peak element found." << endl;
    }
    else
    {
        cout << "Peak element " << arr[place] << " is at index " << place << "." << endl;
    }
}
