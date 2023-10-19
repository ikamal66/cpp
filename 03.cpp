#include<iostream>
using namespace std;
int glo = 6;  // Global variable 
void sum(){
    int a;
    cout<<glo;
    
}

int main(){  // The periority is always a local variable 
    int glo = 9;
    glo = 78;  // local variable 
    sum(); 
    cout<<glo;
   

    return 0;
}