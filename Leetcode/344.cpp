#include <iostream>
#include <vector>

using namespace std;

void reverseString(vector<char>& s) {
    int i = 0;
    int j = s.size() - 1;

    while (i <= j) {
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        i++;
        j--;
    }
}

int main() {
    vector<char> str = {'h', 'e', 'l', 'l', 'o'};
    
    cout << "Original String: ";
    for (char c : str) {
        cout << c;
    }
    cout << endl;
    
    reverseString(str);
    
    cout << "Reversed String: ";
    for (char c : str) {
        cout << c;
    }
    cout << endl;

    return 0;
}
