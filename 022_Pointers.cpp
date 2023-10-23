//How to print the address of the variable by the help of pointers.

#include<iostream>
using namespace std;

int main(){
    // what is poiters? --->  data type which holds the address of other data types.

    int a = 3;
    int* b = &a;  // Here, b is pointer which store the address of a.
    // We can also write this
    // int* b;
    // b = &a;

    // & -----> (Address of) operator
    cout<<"The address of a is "<<&a<<endl;
    cout<<"The address of a is "<<b<<endl;

    // *  ---->(Value at) Dereference operator
    cout<<"The value at address b is "<<*b<<endl;
cout<<endl;

// Pointer to Pointer
int** c = &b;
cout<<"The address of b is "<<&b<<endl;
cout<<"The address of b is "<<c<<endl;
cout<<"The  value at address  c is "<<*c<<endl;
cout<<"The value at address value_at(value_at(c)) is "<<**c<<endl;


    return 0;
}