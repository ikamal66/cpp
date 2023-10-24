// Using of Swap  ,swapPointer,swapReferenceVar function and Return by reference
#include <iostream>
using namespace std;

int sum(int a, int b)
{
    int c = a + b;
    return c;
}
// This will not swap a and b
void swap(int a, int b) // temp   a    b   Here, a and b are formal arguments
{                       // 4      4    5
    int temp = a;       // 4      5    5
    a = b;              // 4      5    4
    b = temp;
}
// Call by reference using pointers
void swapPointer(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp; // *b is known as "value as address b"
}

// Call by reference using C++ reference Variables
void swapReferenceVar(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

// Return by Reference
// int & swapReferenceVar(int &a, int &b)
// {
//     int temp = a;
//     a = b;
//     b = temp;
//     return a;
// }

int main()
{
    int x = 4, y = 5;
    cout << "The sum of 4 and 5 is :" << sum(x, y) << endl; // sum
    cout << "The value of x is " << x << " and the value of y is " << y << endl;
    // This will not swap a and b
    // swap(x,y);  // x and y are actual arguments , and here actual arguments were copy in the formal arguments
    // Arguments ---> The values that are declared within a function
    // swapPointer(&x, &y); // This will swap a and b using pointer reference
    swapReferenceVar(x, y); // This will swap a and b using reference Variable
                            //  swapReferenceVar(x,y) = 766;   //This will swap the value of x by 766

    cout << "The value of x is " << x << " and the value of y is " << y << endl;

    return 0;
}