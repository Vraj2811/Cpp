#include <iostream>

using namespace std;

/*
int glo=10;

void fxn(){
    int glo=5;
    cout<<glo<<" ";
}

int main(){
    int glo=7;
    fxn();
    cout<<glo<<endl;

    return 0;
}

// Output=5 7
*/

/*
int glo = 10;

void fxn()
{
    int glo = 5;
    cout << glo << " ";
}

int main()
{
    fxn();
    cout << glo << endl;

    return 0;
}

// Output=5 10
*/

int glo = 10;

void fxn()
{
    cout << glo << " ";
}

int main()
{
    int glo = 7;
    fxn();
    cout << glo << endl;

    return 0;
}

// Output=10 7
