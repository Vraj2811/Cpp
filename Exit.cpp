#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int userInput;
    cout << "Enter a number: ";
    cin >> userInput;

    if (userInput < 0)
    {
        cout << "Invalid input." << endl;
        exit(1);
    }
    cout << "You entered: " << userInput << endl;

    return 0;
}
