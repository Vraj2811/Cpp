#include <iostream>
#include <vector>
using namespace std;

int beautifulTriplets(int d, vector<int> arr)
{
    int c = 0;
    int n = arr.size();

    for (int i = 0; i < n - 2; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            if (arr[j] - arr[i] == d)
            {
                for (int k = j + 1; k < n; k++)
                {
                    if (arr[k] - arr[j] == d)
                    {
                        c++;
                    }
                }
            }
        }
    }

    return c;
}

int main()
{
    int n, d;
    cin >> n >> d;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int result = beautifulTriplets(d, arr);
    cout << result << endl;

    return 0;
}
