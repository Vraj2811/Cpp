#include <iostream>
#include <string>

using namespace std;

string removeDuplicates(string s)
{
    string str;
    for (int i = 0; i < s.size(); i++)
    {
        if (str.length() > 0 && str.back() == s[i])
        {
            str.pop_back();
        }
        else
        {
            str.push_back(s[i]);
        }
    }
    return str;
}

int main()
{
    string inputString = "aaabbbcccddeeefffggg";

    cout << "Original String: " << inputString << endl;

    string result = removeDuplicates(inputString);

    cout << "String with Consecutive Duplicates Removed: " << result << endl;

    return 0;
}
