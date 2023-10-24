// This will not swap a and b values
#include <iostream>
using namespace std;

void swap(int a, int b)

// If we use of "void swap(int &a , int &b)"  the it easily swap the values
//  void swap(int &a , int &b)
// a and b are formal arguments

{
    int temp = a;
    a = b;
    b = temp;
}
int main()
{ // x and y are actual arguments
    int x = 2, y = 5;
    cout << "The value of x is " << x << " and the value of y is " << y << endl;
    swap(x, y); // x and y are actual arguments , and here actual arguments were copy in the formal arguments

    cout << "The value of x is " << x << " and the value of y is " << y << endl;

    // Argument ---> The values that are declared within a function when the function are known as an argument

    // Parameters ---> The variables that are defined when the function is declared is known as Parameters.

    return 0;
}