/*
These are some periority in  Operator Precedence --->

!
* , / , %
+ , -
< > , <= , =>
== , !=
&&
||
=

*/



#include<iostream>
using namespace std;

int main(){

    int a = 30 , b = 73;
    int c = a*5+30; // we modify this equation in (a*5)+30; close the higher periority digits in brackets.
    cout<<"The value of c is :"<<c<<endl;

int x = 10 , y = 5;
int z = x*10+y-30+10; // we modify this equation in ((((x*10)+y)-30)+10);
    cout<<"The value of z is :"<<z<<endl;

    return 0;
}