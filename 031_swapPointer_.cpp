// Call by reference using pointers
#include <iostream>
using namespace std;

void swapPointer(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp; // *b is known as "value as address b"
}

int main()
{

    int x = 4, y = 5;
    cout << "The value of x is " << x << " and the value of y is " << y << endl;

    swapPointer(&x, &y); // This will swap a and b using pointer reference

    cout << "The value of x is " << x << " and the value of y is " << y << endl;

    return 0;
}