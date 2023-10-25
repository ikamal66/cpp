// Constant Arguments ---> vo arguments hote hai accidentlly hmara function change naa kar baithe .
// so hum ek qualifier laga dete hai "const"
#include<iostream>
using namespace std;

// int strlen(const char *p){  ----> for length of string

// }
int main(){

    int a = 5;
    cout<<"value is "<<a<<endl;

    a = 7;
    cout<<"value is "<<a<<endl;

    // Here, we use of const keyword 
    int const b = 10;
    cout<<"value is "<<b<<endl;

    // int const b = 13;   ----->  It shown an error if we execute this 
    // cout<<"value is "<<b<<endl;  



    
    return 0;
}