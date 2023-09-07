#include <iostream>

using namespace std;

int main()
{
    /*
    for (int i = 1; i < 11; i++)
    {
        cout << 5 << " * " << i << " = " << i << endl;
    }

    */

    /*
    int i = 1;
    while (i <= 10)
    {
        cout << 5 << " * " << i << " = " << i << endl;
        i++;
    }
    */

    int i = 1;
    do
    {
        cout << 5 << " * " << i << " = " << i << endl;
        i++;
    } while (i <= 10);

    return 0;
}