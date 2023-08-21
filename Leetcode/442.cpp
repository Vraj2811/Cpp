#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int nums[] = {4, 3, 2, 7, 8, 2, 3, 1};
    int numsSize = sizeof(nums) / sizeof(nums[0]);

    sort(nums, nums + numsSize);

    int ans[100];
    int ansIndex = 0;

    for (int i = 1; i < numsSize; i++)
    {
        if (nums[i] == nums[i - 1])
        {
            ans[ansIndex++] = nums[i];
        }
    }

    cout << "Duplicates: ";
    for (int i = 0; i < ansIndex; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}
