#include <iostream>
#include <vector>

using namespace std;

bool isPossible(vector<int> &arr, int n, int k, int mid)
{
    int students = 1;
    int boardSum = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > mid)
        {
            return false;
        }

        if (boardSum + arr[i] <= mid)
        {
            boardSum += arr[i];
        }
        else
        {
            students++;
            boardSum = arr[i];
        }
    }

    return students <= k;
}

int findLargestMinDistance(vector<int> &boards, int k)
{
    int s = 0;
    int sum = 0;
    int n = boards.size();

    for (int i = 0; i < n; i++)
    {
        sum += boards[i];
    }

    int e = sum;
    int ans = -1;
    if (k > n)
    {
        return ans;
    }

    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (isPossible(boards, n, k, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }

    return ans;
}

int main()
{
    int n, k;
    cout << "Enter the number of boards: ";
    cin >> n;
    vector<int> boards(n);

    cout << "Enter the lengths of the boards: ";
    for (int i = 0; i < n; i++)
    {
        cin >> boards[i];
    }

    cout << "Enter the number of students: ";
    cin >> k;

    int largestMinDistance = findLargestMinDistance(boards, k);

    cout << "The largest minimum distance is: " << largestMinDistance << endl;

    return 0;
}
