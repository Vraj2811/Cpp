#include <iostream>
#include <vector>
using namespace std;

void PrintArray(vector<int> &arr)
{
    cout << "The array is : ";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

vector<int> findArrayIntersection(vector<int> &arr1, vector<int> &arr2)
{
    int i = 0;
    int j = 0;
    vector<int> intersection;

    while (i < arr1.size() && j < arr2.size())
    {
        if (arr1[i] < arr2[j])
        {
            i++;
        }
        else if (arr1[i] > arr2[j])
        {
            j++;
        }
        else
        {
            intersection.push_back(arr1[i]);
            i++;
            j++;
        }
    }

    return intersection;
}

int main()
{
    vector<int> arr1 = {1, 2, 4, 4};
    vector<int> arr2 = {2, 3, 4, 6, 7};

    PrintArray(arr1);
    PrintArray(arr2);

    vector<int> result = findArrayIntersection(arr1, arr2);

    cout << "Intersection: ";
    PrintArray(result);

    return 0;
}
