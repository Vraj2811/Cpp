#include <iostream>
using namespace std;

int Sum(int num[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += num[i];
    }
    return sum;
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

    int sum = Sum(arr, size);

    cout << "The sum of the values is " << sum << endl;

    return 0;
}