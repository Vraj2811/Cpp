#include <iostream>
using namespace std;

bool Found(int arr[], int n, int target)
{
    if (n == 1)
    {
        return (arr[0] == target);
    }
    return Found(arr, n - 1, target) || (arr[n - 1] == target);
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

    cout << "Enter a no. to be found" << endl;
    int a;
    cin >> a;

    bool found = Found(arr, n, a);

    if (found)
    {
        cout << a << " is present in the arr" << endl;
    }
    else
    {
        cout << a << " is not present in the arr" << endl;
    }

    return 0;
}