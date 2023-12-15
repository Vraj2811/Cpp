#include <iostream>
#include <vector>
using namespace std;

void PrintArray(int arr[], int size)
{
    cout << "The array is : ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int findDuplicate(vector<int> &arr)
{
    int size = arr.size();
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return (sum - size * (size - 1) / 2);
}

int main()
{
    int size = 5;
    vector<int> arr = {1, 2, 4, 3, 4};

    PrintArray(&arr[0], size);

    int num = findDuplicate(arr);

    cout << "The duplicate element is " << num << endl;

    return 0;
}
