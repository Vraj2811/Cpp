#include <iostream>
#include <string>

using namespace std;

string removeOccurrences(string s, string part)
{
    while (s.length() != 0 && s.find(part) != string::npos)
    {
        s.replace(s.find(part), part.length(), "");
    }
    return s;
}

int main()
{
    string inputString = "This is a test string with test cases.";
    string substringToRemove = "test";

    string result = removeOccurrences(inputString, substringToRemove);

    cout << "Original String: " << inputString << endl;
    cout << "After Removing '" << substringToRemove << "': " << result << endl;

    return 0;
}
