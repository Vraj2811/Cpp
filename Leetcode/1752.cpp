#include<iostream>
#include <vector>
using namespace std;

bool check(vector<int> &nums)
{
    int n = nums.size();
    int c = 0;

    for (int i = 0; i < n - 1; i++)
    {
        if (nums[i + 1] >= nums[i])
        {
            c++;
        }
    }

    return c == n - 1 || (c == n - 2 && nums[0] >= nums[n - 1]);
}

int main()
{
    vector<int> nums1 = {2, 3, 4, 1, 1};
    vector<int> nums2 = {4, 1, 2, 3};

    bool result1 = check(nums1);
    bool result2 = check(nums2);

    cout << "Result for nums1: " << result1 << endl;
    cout << "Result for nums2: " << result2 << endl;

    return 0;
}
