// Selection control structure: Switch Case
#include <iostream>
using namespace std;

int main()
{

    int age;
    cout << "Enter your age" << endl;
    cin >> age;

    switch (age)
    {
    case 18:
        cout << "You are 18"<<endl;
        break; // if we don't use of break then all the strings will print .

    case 25:
        cout << "You are 25"<<endl;
        break;

    case 30:
        cout << "You are 10"<<endl;
        break;

    default:
        cout << "Age don't match" << endl;
        break;
    }

    return 0;
}