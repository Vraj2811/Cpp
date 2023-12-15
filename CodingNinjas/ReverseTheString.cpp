#include <iostream>
#include <string>

using namespace std;

string reverseString(string str)
{
    int start = 0;
    int n = str.length();
    while (start < n / 2)
    {
        swap(str[start], str[n - start - 1]);
        start++;
    }
    return str;
}

int main()
{
    string input;

    cout << "Enter a string: ";
    cin >> input;

    string reversed = reverseString(input);

    cout << "Reversed string: " << reversed << endl;

    return 0;
}
