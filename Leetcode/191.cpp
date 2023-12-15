#include <iostream>
using namespace std;

int hammingWeight(uint32_t n)
{
    int count = 0;
    while (n != 0)
    {
        if (n & 1 == 1)
        {
            count += 1;
        }
        n = n >> 1;
    }
    return count;
}

int main()
{
    uint32_t a = 0b00000000000000000000000000001011;
    int ans = hammingWeight(a);
    cout << ans << endl;
    return 0;
}
