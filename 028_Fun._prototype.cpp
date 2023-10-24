// Function ProtoType
#include <iostream>
using namespace std;

// type function-name (arguments);
// int sum(int a, int b);  ------>Acceptable
// int sum(int a , b);------> Not Acceptable
// int sum (int , int);------> Acceptable
// void g(void); ----> Acceptable
void g(); // ----- > Acceptable //Use this for print the sentence  below in cout after execute the code

int sum(int, int); // It give assurity to program that sum function in the code(Dundo useee) found out . It not give the gurantee
// It is function prototype
int main()
{
    int num1;
    int num2;
    cout << "Enter the value of num1:" << endl;
    cin >> num1;
    cout << "Enter the value of num2:" << endl;
    cin >> num2;
    // num1 and num2 are actual parameters
    cout << "The sum  is: " << sum(num1, num2) << endl;
    g(); // for void //Use this for print the sentence below in cout after execute the code
    return 0;
}

int sum(int a, int b)
{
    // Formal Parameters a and b will be taking values from the actual parameters num1 and num2
    int c = a + b;
    return c;
    // Formal Parameters  ---> Define in function just use in a function
}

void g() // Use this for print the sentence in cout after execute the code
{
    cout << "\nHello , Shefali how are you ";
}
