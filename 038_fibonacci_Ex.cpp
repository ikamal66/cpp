// By help of Recursions
// Fibonacci sequence --> 1,1,2,3,5,8,13,21,34.....

#include <iostream>
using namespace std;

int fib(int n)
{
    if (n < 2)
    {
        return 1;
    }
    return fib(n - 2) + fib(n - 1); // Learn this formula
}

// fib(5)
// fib(3) + fib(4)
// fib(1) + fib(2) + fib(2) + fib(3)

int main()
{

    int a;
    cout << "Enter the number" << endl;
    cin >> a;
    cout << "The term in fibonacci sequence at position " << a << " is " << fib(a) << endl;
    return 0;
}
