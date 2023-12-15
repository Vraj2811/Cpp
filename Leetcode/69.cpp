#include <iostream>

int mySqrt(int n)
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
    return ans;
}

int main()
{
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    int result = mySqrt(n);
    std::cout << "Floor square root of " << n << " is " << result << std::endl;
    return 0;
}
