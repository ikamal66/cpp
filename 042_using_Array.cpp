#include <iostream>
using namespace std;

class Shop
{
    // These are three private variable
    int itemId[100];
    int itemPrice[100];
    int counter; // Track how much items already add in array
public:
    void initCounter(void) { counter = 0; } // Counter value 0 for every object we made
    void setPrice(void);                    // ask item id and their price
    void displayPrice(void);
};

void Shop ::setPrice(void)
{
    cout << "Enter Id of your item no " << counter + 1 << endl;
    cin >> itemId[counter];

    cout << "Enter Price of your item" << endl;
    cin >> itemPrice[counter];
    counter++;
}
void Shop ::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The Price of item with Id " << itemId[i] << " is " << itemPrice[i] << endl;
    }
}
int main()
{
    Shop dukaan; // Here, dukaan is an object
    dukaan.initCounter();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.displayPrice();

    return 0;
}