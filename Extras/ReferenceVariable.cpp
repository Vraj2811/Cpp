#include <iostream>
using namespace std;

int main()
{
    int i = 5;
    int j = i;
    int &k = i;

    cout << "The initial values are :" << endl;
    cout << "i : " << i << endl;
    cout << "j : " << j << endl;
    cout << "k : " << k << endl;

    i++;

    cout << "The final values are :" << endl;
    cout << "i : " << i << endl;
    cout << "j : " << j << endl;
    cout << "k : " << k << endl;

    return 0;
}