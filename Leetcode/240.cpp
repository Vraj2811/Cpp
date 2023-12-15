#include <iostream>
#include <vector>

using namespace std;

bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    int rows = matrix.size();
    int cols = matrix[0].size();

    int rowIndex = rows - 1;
    int colIndex = 0;

    while (rowIndex >= 0 && colIndex < cols)
    {
        if (matrix[rowIndex][colIndex] == target)
        {
            return true;
        }
        else if (matrix[rowIndex][colIndex] > target)
        {
            rowIndex--;
        }
        else if (matrix[rowIndex][colIndex] < target)
        {
            colIndex++;
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
