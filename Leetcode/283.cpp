#include <iostream>
#include <vector>

using namespace std;

void moveZeroes(vector<int> &nums)
{
    int nonzero = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] != 0)
        {
            nums[nonzero] = nums[i];
            nonzero++;
        }
    }
    for (int i = nonzero; i < nums.size(); i++)
    {
        nums[i] = 0;
    }
}

int main()
{
    vector<int> nums = {0, 1, 0, 3, 12};
    moveZeroes(nums);

    cout << "After moving zeroes to the end: ";
    for (int num : nums)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
