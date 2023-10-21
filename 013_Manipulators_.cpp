#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int a = 3 , b= 67 , c = 8678;
    cout<<"The value of a without setw is :"<<a<<endl;
    cout<<"The value of b without setw is :"<<b<<endl;
    cout<<"The value of c without setw is :"<<c<<endl;
cout<<endl;

    cout<<"The value of a is :"<<setw(4)<<a<<endl;
    cout<<"The value of b is :"<<setw(4)<<b<<endl;
    cout<<"The value of c is :"<<setw(4)<<c<<endl;

// setw is reserved the width we set here we set width 4 


    return 0;
}