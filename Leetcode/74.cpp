#include <iostream>
#include <vector>

using namespace std;

bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    int rows = matrix.size();
    int cols = matrix[0].size();

    int start = 0;
    int end = rows * cols - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (matrix[mid / cols][mid % cols] == target)
        {
            return true;
        }
        else if (matrix[mid / cols][mid % cols] > target)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return false;
}

int main()
{
    vector<vector<int>> matrix = {
        {1, 4, 7, 11},
        {2, 5, 8, 12},
        {3, 6, 9, 16},
        {10, 13, 14, 17}};

    int target = 5;

    if (searchMatrix(matrix, target))
    {
        cout << "Target " << target << " found in the matrix." << endl;
    }
    else
    {
        cout << "Target " << target << " not found in the matrix." << endl;
    }

    return 0;
}
