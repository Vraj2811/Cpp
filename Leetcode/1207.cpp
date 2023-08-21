#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool uniqueOccurrences(vector<int> &arr)
{
    vector<int> counter;

    sort(arr.begin(), arr.end());

    int count = 1;
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] == arr[i - 1])
        {
            count += 1;
        }
        else
        {
            counter.push_back(count);
            count = 1;
        }
    }
    counter.push_back(count);

    for (int i = 1; i < counter.size(); i++)
    {
        if (counter[i] == counter[i - 1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    vector<int> arr = {1, 2, 2, 1, 1, 3};

    bool result = uniqueOccurrences(arr);

    if (result)
    {
        cout << "Occurrences are unique." << endl;
    }
    else
    {
        cout << "Occurrences are not unique." << endl;
    }

    return 0;
}
