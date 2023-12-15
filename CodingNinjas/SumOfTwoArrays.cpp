#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

vector<int> findArraySum(vector<int> &a, int n, vector<int> &b, int m)
{
    vector<int> Sum;
    int sum1 = 0;
    int sum2 = 0;

    for (int i = 0; i < n; i++)
    {
        sum1 += a[i] * (int)round(pow(10, n - 1 - i));
    }

    for (int i = 0; i < m; i++)
    {
        sum2 += b[i] * (int)round(pow(10, m - 1 - i));
    }

    int sum3 = sum1 + sum2;

    while (sum3 != 0)
    {
        Sum.push_back(sum3 % 10);
        sum3 = sum3 / 10;
    }

    int i = 0;
    int j = Sum.size() - 1;

    while (i <= j)
    {
        swap(Sum[i], Sum[j]);
        i++;
        j--;
    }

    return Sum;
}

int main()
{
    vector<int> a = {4, 5, 1};
    vector<int> b = {3, 4, 5};

    vector<int> result = findArraySum(a, 3, b, 3);

    cout << "Sum of arrays: ";
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i];
    }

    cout << endl;

    return 0;
}
