#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void PrintArray(vector<int> &arr)
{
    cout << "The array is : ";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

vector<vector<int>> pairSum(vector<int> &arr, int s)
{
    sort(arr.begin(), arr.end());
    vector<vector<int>> sum;

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] + arr[j] == s)
            {
                sum.push_back(vector<int>{arr[i], arr[j]});
            }
        }
    }

    return sum;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    int target = 5;

    PrintArray(arr);

    vector<vector<int>> result = pairSum(arr, target);

    cout << "Pairs that sum to " << target << ": ";
    for (const vector<int> &pair : result)
    {
        cout << "(" << pair[0] << ", " << pair[1] << ") ";
    }
    cout << endl;

    return 0;
}
