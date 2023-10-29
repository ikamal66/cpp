// Class, private and public
// class -- basic template for creating object .
// Object -- Basic runtime entities
#include <iostream>
using namespace std;

class Employee // Employee is class name.
{
private: // Private ke andar ke functions only access this data
    int a, b, c;

public:
    int d, e;
    void setData(int a1, int b1, int c1); // Declaration  to compiler "ye a1 , b1 , c1 es code ke andar hai " but not comfirmed
    void getData()
    { // print the data
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
        cout << "The value of c is " << c << endl;
        cout << "The value of d is " << d << endl;
        cout << "The value of e is " << e << endl;
    }
}; // semi-colon is necessary after the class end

void Employee ::setData(int a1, int b1, int c1)
{ // :: is scope resolution operator
    a = a1;
    b = b1;
    c = c1;
}

int main()
{
    Employee kamal;
    // Here, kamal is an object
    // kamal.a = 123;  ---->This will throw error as a is private
    kamal.d = 87 ;
    kamal.e = 89;
    kamal.setData(5, 10, 67);
    kamal.getData();
    return 0;
}