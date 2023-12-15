#include <iostream>
using namespace std;

int floorSqrt(int n,int x)
{
    int start = 0;
    int end = n;
    int ans = -1;

    while (start <= end)
    {
        long long int mid = end - (end - start) / 2;

        long long int sq = mid * mid;
        if (sq == n)
        {
            return mid;
        }
        else if (sq > n)
        {
            end = mid - 1;
        }
        else if (sq < n)
        {
            ans = mid;
            start = mid + 1;
        }
    }

    int decimal=1;
    return ans;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int result = floorSqrt(n);
    cout << "Floor square root of " << n << " is " << result << endl;
    return 0;
}
