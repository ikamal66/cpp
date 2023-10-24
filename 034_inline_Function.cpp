// Inline function and static variable

#include <iostream>
using namespace std;

// Inline Function ---> we should make inline function which take less number of codes or lines in a Function.
// We don't made the large number of codes in a function as a inline function  ---> If we made the program take large memory
// we req. to compiler to make the function inliner . It depend on compiler to make it inline or not.
inline int product(int a, int b)
{
    // Not recommended to use below lines with inline functions
    // static int c = 0;  // This execute only once
    // c = c+1; // Next time this function is run, the value of c will be retained
    return a * b;
    // return a*b+c;  // when use of static
}
int main()
{
    int a, b;
    cout << "Enter the value of a and b :" << endl;
    cin >> a >> b;
    cout << "The Product is :" << product(a, b) << endl;
    cout << "The Product is :" << product(a, b) << endl;
    cout << "The Product is :" << product(a, b) << endl;
    cout << "The Product is :" << product(a, b) << endl;
    cout << "The Product is :" << product(a, b) << endl;
    cout << "The Product is :" << product(a, b) << endl;
    cout << "The Product is :" << product(a, b) << endl;
    cout << "The Product is :" << product(a, b) << endl;
    cout << "The Product is :" << product(a, b) << endl;

    /*

    When we don't use of inline function --
    1. when recursion occur
    2. when static variable use

    */

    return 0;
}