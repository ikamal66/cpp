#include <iostream>
using namespace std;

int main()
{
    int a = 4, b = 5;
    cout << "Followings are the operators in C++" << endl; // we use endl or \n for the next line in the code
    //  Arithmetic Operator
    cout << "The value of a + b is " << a + b << endl;
    cout << "The value of a - b is " << a - b << endl;
    cout << "The value of a * b is " << a * b << endl;
    cout << "The value of a / b is " << a / b << endl;
    cout << "The value of a % b is " << a % b << endl;
    cout << "The value of a ++ is " << a++ << endl;
    cout << "The value of a-- is " << a-- << endl;
    cout << "The value of ++a  is " << ++a << endl;
    cout << "The value of --a is " << --a << endl;
    cout<<endl;


// Assignment Operator -> Used to assign values to variables
// int a =3, b=8;
// char a = 'p';

// Comparision Operator
cout<<"Followings are the comparision operator in C++"<<endl;
cout <<"The value of a == b is "<< (a == b)<< endl;
cout <<"The value of a!= b is "<< (a != b)<< endl;
cout <<"The value of a >= b is "<< (a >= b)<< endl;
cout <<"The value of a <= b is "<< (a <= b)<< endl;
cout <<"The value of a > b is "<< (a  > b)<< endl;
cout <<"The value of a < b is "<< (a < b)<< endl;
cout<<endl;


// Logical Operator
cout<<"Followings are the Logical operator in C++"<<endl;
cout <<" The value of this logical and operator ((a==b) && (a<b)) is : "<< ((a==b) && (a<b)) << endl;
cout <<" The value of this logical Or operator ((a==b) || (a<b)) is : "<< ((a==b) || (a<b)) << endl;
cout<<endl;

    return 0;
}