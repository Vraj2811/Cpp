#include <iostream>
using namespace std;

int len(char ch[])
{
    int count = 0;
    for (int i = 0; ch[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

void reverse(char ch[])
{
    int i = 0;
    int j = len(ch) - 1;
    while (i <= j)
    {
        char temp = ch[i];
        ch[i] = ch[j];
        ch[j] = temp;
        i++;
        j--;
    }
}

int main()
{
    char name[20];
    cin >> name;

    cout << "Name is " << name << endl;

    cout << "Length of string is " << len(name) << endl;

    reverse(name);
    cout<< "Reverse of string is " << name << endl;

    return 0;
}