#include <iostream>
#include <string>

using namespace std;

bool checkInclusion(string s1, string s2)
{
    int count[26] = {0};

    for (int i = 0; i < s1.length(); i++)
    {
        int index = s1[i] - 'a';
        count[index]++;
    }

    if (s1.length() > s2.length())
    {
        return false;
    }

    for (int i = 0; i <= s2.length() - s1.length(); i++)
    {
        int count1[26] = {0};

        for (int j = 0; j < s1.length(); j++)
        {
            int index = s2[i + j] - 'a';
            count1[index]++;
        }

        bool x = true;

        for (int a = 0; a < 26; a++)
        {
            if (count[a] != count1[a])
            {
                x = false;
                break;
            }
        }

        if (x)
        {
            return true;
        }
    }

    return false;
}

int main()
{
    string s1, s2;
    cout << "Enter the first string: ";
    cin >> s1;
    cout << "Enter the second string: ";
    cin >> s2;

    if (checkInclusion(s1, s2))
    {
        cout << "The first string is a substring permutation of the second string." << endl;
    }
    else
    {
        cout << "The first string is not a substring permutation of the second string." << endl;
    }

    return 0;
}
