#include <iostream>
using namespace std;

int Sum(int arr[], int n)
{
    if (n == 1)
    {
        return arr[0];
    }
    return arr[n - 1] + Sum(arr, n - 1);
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

    int sum = Sum(arr, n);

    cout << "The sum of the elements is " << sum << endl;

    return 0;
}