#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    vector<int> findDuplicates(vector<int> &nums)
    {
        vector<int> duplicates;

        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size() - 1; i++)
        {
            if (nums[i] == nums[i + 1])
            {
                duplicates.push_back(nums[i]);
            }
        }
        return duplicates;
    }
};

int main()
{
    vector<int> nums = {4, 3, 2, 7, 8, 2, 1, 3};
    Solution solution;
    vector<int> duplicates = solution.findDuplicates(nums);

    cout << "Duplicates in the array are: ";
    for (int num : duplicates)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
