#include<iostream>
using namespace std;

int main (){

    int a = 18;
    float b = 700.34;

    cout<<"The value of a is "<<(float)a<<endl;
    // cout<<"The value of a is "<<float(a)<<endl;   Both are same 

    cout<<"The value of b is "<<(int)b<<endl;


cout<<"The expression is "<<a+b<<endl;
cout<<"The expression is "<<a+int(b)<<endl;
cout<<"The expression is "<<a+(int)b<<endl;








return 0;
}
