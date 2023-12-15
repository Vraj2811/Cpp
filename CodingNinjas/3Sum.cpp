#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> findTriplets(vector<int> arr, int n, int s)
{
    sort(arr.begin(), arr.end());
    vector<vector<int>> triplets;

    for (int i = 0; i < n - 2; i++)
    {
        int target = s - arr[i];
        int left = i + 1;
        int right = n - 1;

        while (left < right)
        {
            int currentSum = arr[left] + arr[right];
            if (currentSum == target)
            {
                vector<int> triplet = {arr[i], arr[left], arr[right]};
                triplets.push_back(triplet);
                while (left < right && arr[left] == triplet[1])
                    left++;
                while (left < right && arr[right] == triplet[2])
                    right--;
            }
            else if (currentSum < target)
            {
                left++;
            }
            else
            {
                right--;
            }
        }

        while (i < n - 2 && arr[i] == arr[i + 1])
        {
            i++;
        }
    }

    return triplets;
}

int main()
{
    int n = 5;
    int s = 12;
    vector<int> arr = {10, 5, 5, 5, 2};

    vector<vector<int>> result = findTriplets(arr, n, s);

    if (result.empty())
    {
        cout << "-1";
    }
    else
    {
        for (vector<int> triplet : result)
        {
            for (int num : triplet)
            {
                cout << num << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
