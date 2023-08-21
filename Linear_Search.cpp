#include <iostream>
using namespace std;

bool Check(int num[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (num[i] == key)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int arr[10] = {1, 15, 23, 98, 5, 6, 1, 8, 5, 10};
    int key;
    cin >> key;

    bool found = Check(arr, 10, key);

    if (found)
    {
        cout << key << " is present in arr" << endl;
        return 0;
    }
    cout << key << " is not present in arr" << endl;
    return 0;
}