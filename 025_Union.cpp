// Union is use for Better Memory Management
#include<iostream>
using namespace std;

union money
{
    /* data */
    int rice ;
    char car ;
    float pounds;
};
int main(){
    union money m1; // In union we only print one value 
    m1.rice = 34;
    m1.car = 'c';
    m1.pounds = 101;
    cout<<m1.rice<<endl ; // here, if we execute this ,the compiler show different value of rice 
/*
m1.rice = 34;
cout<<m1.rice<<endl;  // compiler print the value of rice 34
*/
}