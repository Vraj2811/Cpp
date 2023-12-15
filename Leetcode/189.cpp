#include <iostream>
#include <vector>

using namespace std;

void rotate(vector<int> &nums, int k)
{
    int n = nums.size();
    k = k % n;

    vector<int> copy(nums);

    for (int i = 0; i < n; i++)
    {
        nums[i] = copy[(i - k + n) % n];
    }
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;

    rotate(nums, k);

    for (int num : nums)
    {
        cout << num << " ";
    }

    return 0;
}
