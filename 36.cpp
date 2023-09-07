#include <iostream>

using namespace std;

class Bank
{
    float principal;
    float rate;
    int years;
    float returnvalue;

public:
    Bank(int p, int r, int t);
    Bank(int p, float r, int t);
    void display(void)
    {
        cout << "Principal amount is " << principal << endl
             << "Return value after " << years << " years is " << returnvalue << endl
             << endl;
    };
};

Bank::Bank(int p, float r, int t)
{
    principal = p;
    years = t;
    rate = r;
    returnvalue = principal;
    for (int i = 0; i < years; i++)
    {
        returnvalue = returnvalue * (1 + rate);
    };
}

Bank::Bank(int p, int r, int t)
{
    principal = p;
    years = t;
    rate = float(r) / 100;
    returnvalue = principal;
    for (int i = 0; i < years; i++)
    {
        returnvalue = returnvalue * (1 + rate);
    };
}

int main()
{
    int p, t, R;
    float r;

    cout << "Enter the value of p,r,t" << endl;
    cin >> p >> r >> t;

    Bank b1 = Bank(p, r, t);
    b1.display();

    cout << "Enter the value of p,R,t" << endl;
    cin >> p >> R >> t;

    Bank b2 = Bank(p, R, t);
    b2.display();

    return 0;
}