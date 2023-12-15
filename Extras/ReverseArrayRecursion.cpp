#include <iostream>
using namespace std;

void Reverse(int arr[], int start, int n)
{
    if (start >= n / 2)
    {
        return;
    }
    swap(arr[start], arr[n - start - 1]);
    return Reverse(arr, start + 1, n);
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

    cout << "Initially" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    Reverse(arr, 0, n);

    cout << "Finally" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}