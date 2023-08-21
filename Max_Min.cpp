#include <iostream>
#include <climits>
using namespace std;

int Max(int num[], int n)
{
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (num[i] > max)
        {
            max = num[i];
        }
    }
    return max;
}

int Min(int num[], int n)
{
    int min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (num[i] < min)
        {
            min = num[i];
        }
    }
    return min;
}

int main()
{
    int arr[100];
    int size;
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int min = Min(arr, size);
    int max = Max(arr, size);

    cout << "The max value is " << max << endl;
    cout << "The min value is " << min << endl;

    return 0;
}