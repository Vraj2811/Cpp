#include <iostream>
#include <string>
using namespace std;

bool checkPalindrome(string s) {
    string cleanedString;
    for (char c : s) {
        if (isalnum(c)) {
            cleanedString += tolower(c);
        }
    }

    int i = 0;
    int j = cleanedString.size() - 1;

    while (i <= j) {
        if (cleanedString[i] != cleanedString[j]) {
            return false;
        }
        i++;
        j--;
    }

    return true;
}

int main() {
    string s;
    cin >> s;

    if (checkPalindrome(s)) {
        cout << "The string is a case-insensitive palindrome." << endl;
    } else {
        cout << "The string is not a case-insensitive palindrome." << endl;
    }

    return 0;
}
