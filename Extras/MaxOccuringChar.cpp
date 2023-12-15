#include <iostream>
#include <string>
#include <map>

using namespace std;

char getMaxOccuringChar(string str)
{
    map<char, int> charCount;

    for (int i = 0; i < str.size(); i++)
    {
        if (charCount.find(str[i]) != charCount.end())
        {
            charCount[str[i]] += 1;
        }
        else
        {
            charCount[str[i]] = 1;
        }
    }

    int max = 0;
    char ch = ' ';

    map<char, int>::iterator it = charCount.begin();

    while (it != charCount.end())
    {
        if (it->second > max)
        {
            max = it->second;
            ch = it->first;
        }
        ++it;
    }

    return ch;
}

int main()
{
    string input;
    cout << "Enter a string: ";
    cin >> input;

    char maxChar = getMaxOccuringChar(input);
    cout << "The character with the maximum occurrence is: " << maxChar << endl;

    return 0;
}
