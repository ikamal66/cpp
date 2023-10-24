// Return by reference
#include <iostream>
using namespace std;

int &swapReferenceVar(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
    return a;
    // return b;
    // Use of return a ; because it is non void function
    // If we do return b ; then the value of y change to 766.
}

int main()
{
    int x = 4, y = 5;
    cout << "The value of x is " << x << " and the value of y is " << y << endl;

    swapReferenceVar(x, y);       // This will swap a and b using reference Variable
    swapReferenceVar(x, y) = 766; // This will swap the value of x by 766

    cout << "The value of x is " << x << " and the value of y is " << y << endl;

    return 0;
}