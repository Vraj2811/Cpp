#include <iostream>
#include <string>

using namespace std;

string replaceSpaces(string &str)
{
    string s;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ' ')
        {
            s.push_back('@');
            s.push_back('4');
            s.push_back('0');
        }
        else
        {
            s.push_back(str[i]);
        }
    }
    return s;
}

int main()
{
    string inputString = "This is a test string with spaces.";

    cout << "Original String: " << inputString << endl;

    string modifiedString = replaceSpaces(inputString);

    cout << "Modified String: " << modifiedString << endl;

    return 0;
}
