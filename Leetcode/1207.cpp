#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
    bool uniqueOccurrences(vector<int> &arr)
    {
        sort(arr.begin(), arr.end());

        vector<int> occ;
        int i = 0;

        while (i < arr.size())
        {
            int c = 1;

            while (i + 1 < arr.size() && arr[i] == arr[i + 1])
            {
                c++;
                i++;
            }

            occ.push_back(c);
            i++;
        }

        sort(occ.begin(), occ.end());

        for (i = 1; i < occ.size(); i++)
        {
            if (occ[i] == occ[i - 1])
            {
                return false;
            }
        }

        return true;
    }
};

int main()
{
    Solution solution;
    vector<int> arr = {1, 2, 2, 1, 1, 3};

    if (solution.uniqueOccurrences(arr))
    {
        cout << "Occurrences are unique." << endl;
    }
    else
    {
        cout << "Occurrences are not unique." << endl;
    }

    return 0;
}
