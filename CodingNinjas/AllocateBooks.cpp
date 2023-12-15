#include <iostream>
#include <vector>
using namespace std;

bool isPossible(vector<int> &pages, int n, int b, int mid)
{
    int students = 1;
    int pageSum = 0;

    for (int i = 0; i < n; i++)
    {
        if (pages[i] > mid)
        {
            return false;
        }

        if (pageSum + pages[i] <= mid)
        {
            pageSum += pages[i];
        }
        else
        {
            students++;
            pageSum = pages[i];
        }
    }

    return students <= b;
}

int allocateBooks(vector<int> &pages, int n, int b)
{
    int s = 0;
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += pages[i];
    }

    int e = sum;
    int ans = -1;
    if (b > n)
    {
        return ans;
    }

    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (isPossible(pages, n, b, mid))
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
    vector<int> pages = {10, 20, 30, 40};
    int n = pages.size();
    int b = 2;

    int result = allocateBooks(pages, n, b);
    cout << "Minimum number of pages for each student: " << result << endl;
    return 0;
}
