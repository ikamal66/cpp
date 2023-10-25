// Default arguments
// Default arguments simpliy vo value hoti hai jo hum ko by default milti hai if we don't give the value

#include <iostream>
using namespace std;

float moneyReceived(int currentMoney, float factor = 1.04)
{ // we write always default argument after the compulsary arguments here , default argument is "factor"
    return currentMoney * factor;
}
int main()
{
    int money = 1000;
    cout << "If you have " << money << "Rs in your bank accout, you will receive" << moneyReceived(money) << "Rs after 1 year" << endl;
    cout << "For VIP If you have " << money << "Rs in your bank accout, you will receive" << moneyReceived(money, 1.1) << "Rs after 1 year";

    return 0;
}