#include <iostream>
#include <vector>
#include <string>

using namespace std;

int compress(vector<char> &chars)
{
    int count = 0;
    int i = 1;
    int c = 1;
    while (i <= chars.size())
    {
        if (i < chars.size() && chars[i] == chars[i - 1])
        {
            c += 1;
        }
        else
        {
            chars[count] = chars[i - 1];
            count++;

            if (c > 1)
            {
                string countStr = to_string(c);
                for (char ch : countStr)
                {
                    chars[count] = ch;
                    count++;
                }
            }

            c = 1;
        }
        i++;
    }
    return count;
}

int main()
{
    vector<char> chars = {'a', 'a', 'b', 'b', 'c', 'c', 'c'};
    int compressedLength = compress(chars);

    cout << "Compressed Array: ";
    for (int i = 0; i < compressedLength; i++)
    {
        cout << chars[i];
    }
    cout << endl;

    return 0;
}
