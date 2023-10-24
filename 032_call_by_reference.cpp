// Call by reference using C++ reference Variables
#include <iostream>
using namespace std;

void swapReferenceVar(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x = 4, y = 5;
    cout << "The value of x is " << x << " and the value of y is " << y << endl;
    // swap(x,y);  // This also swap the values of x and y
    swapReferenceVar(x, y);

    cout << "The value of x is " << x << " and the value of y is " << y << endl;

    return 0;
}
