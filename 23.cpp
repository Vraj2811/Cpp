#include <iostream>

using namespace std;

class Shop
{
    int itemID[100];
    int itemPrice[100];
    int counter;

public:
    void initCounter(void)
    {
        counter = 1;
    };
    void DisplayPrice(void);
    void setPrice(void);
};

void Shop ::setPrice(void)
{
    cout << "Enter ID of your item" << endl;
    cin >> itemID[counter];
    cout << "Enter Price of your item" << endl;
    cin >> itemPrice[counter];
    counter++;
}

void Shop ::DisplayPrice(void)
{
    for (int i = 1; i < counter; i++)
    {
        cout << "The price for item with ID " << itemID[i] << " is " << itemPrice[i] << endl;
    }
}
int main()
{
    Shop Dukaan;
    Dukaan.initCounter();
    Dukaan.setPrice();
    Dukaan.setPrice();
    Dukaan.setPrice();
    Dukaan.setPrice();
    Dukaan.setPrice();
    Dukaan.DisplayPrice();

    return 0;
}