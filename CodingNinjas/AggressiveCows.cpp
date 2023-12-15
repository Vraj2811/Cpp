#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool IsValid(vector<int> &stalls, int k, int mid)
{
    int cows = 1;
    int prev = stalls[0];

    for (int i = 1; i < stalls.size(); i++)
    {
        if (stalls[i] - prev >= mid)
        {
            cows++;
            prev = stalls[i];
        }
    }

    return cows >= k;
}

int aggressiveCows(vector<int> &stalls, int k)
{
    sort(stalls.begin(), stalls.end());

    int start = 0;
    int end = stalls[stalls.size() - 1] - stalls[0];
    int ans = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (IsValid(stalls, k, mid))
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans;
}

int main()
{
    int n, k;
    cout << "Enter the number of stalls: ";
    cin >> n;

    vector<int> stalls(n);

    cout << "Enter the positions of stalls:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> stalls[i];
    }

    cout << "Enter the number of cows: ";
    cin >> k;

    int result = aggressiveCows(stalls, k);

    cout << "Maximum minimum distance: " << result << endl;

    return 0;
}
