#include <iostream>
#include <string>

using namespace std;

class Binary
{
    string s;

public:
    void read(void);
    void chk_bin(void);
    void ones_complement(void);
    void display(void);
};

void Binary ::read()
{
    cout << "Enter a binary no." << endl;
    cin >> s;
}

void Binary ::chk_bin()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "This is not a binary no." << endl;
            exit(0);
        }
    }
    cout << "Original Binary No. is ";
    display();
}

void Binary ::ones_complement()
{
    chk_bin();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '1')
        {
            s.at(i) = '0';
        }
        else
        {
            s.at(i) = '1';
        }
    }
    cout << "The Binary No. after ones complement is ";
    display();
}

void Binary ::display()
{
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}

int main()
{
    Binary bin;
    bin.read();
    bin.ones_complement();
    return 0;
}