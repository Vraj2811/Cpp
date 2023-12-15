#include <iostream>
#include <vector>
using namespace std;

vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    vector<int> v;

    for (int j = 0; j < mCols; j++)
    {
        if (j % 2 == 0)
        {
            for (int i = 0; i < nRows; i++)
            {
                v.push_back(arr[i][j]);
            }
        }
        else
        {
            for (int i = nRows - 1; i >= 0; i--)
            {
                v.push_back(arr[i][j]);
            }
        }
    }

    return v;
}

int main()
{
    int nRows = 3;
    int mCols = 4;
    vector<vector<int>> arr = {{1, 2, 3, 4},
                               {5, 6, 7, 8},
                               {9, 10, 11, 12}};

    vector<int> result = wavePrint(arr, nRows, mCols);

    for (int num : result)
    {
        cout << num << " ";
    }

    return 0;
}
