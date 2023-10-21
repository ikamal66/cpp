#include <iostream>
using namespace std;

int c = 45;  // Global variable

int main()
{
    int a , b ,c;
cout<<"Enter the value of a "<<endl;
cin>>a;
cout<<"Enter the value of b "<<endl;
cin>>b;
c = a + b;  // local variable 
cout<<"The sum  is :"<<c<<endl;
cout<<"The global sum  is :"<<::c;  // Here, the :: is Scope resolution operator use for print the value of global .





return 0;
}