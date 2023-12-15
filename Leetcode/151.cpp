#include <iostream>
#include <vector>
#include <string>
using namespace std;

string reverseWords(string s)
{
    vector<string> words;
    string word;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != ' ')
        {
            word.push_back(s[i]);
        }
        else
        {
            if (!word.empty())
            {
                words.push_back(word);
                word.clear();
            }
        }
    }

    if (!word.empty())
    {
        words.push_back(word);
    }

    string result;
    for (int i = 0; i < words.size(); i++)
    {
        result += words[words.size() - 1 - i];
        if (i < words.size() - 1)
        {
            result += ' ';
        }
    }

    return result;
}

int main()
{
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    string reversed = reverseWords(input);
    cout << "Reversed words: " << reversed << endl;

    return 0;
}
