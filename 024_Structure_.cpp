/*
Structure are user define data type use for combine
different - different items
*/ 
#include<iostream>
using namespace std;

typedef struct student // typedef ka matlab hota hai ki jisko hum struct student bolna chahte hai usko hum ep bolenge; it is optional
{
    int age ;
    float salary;
    char favChar;
}ep;

int main(){
    ep kamal; // We here use of ep because we use typedef above and ep 
    struct student kunal;
    struct student shefali;

    kamal.age = 18;
    kamal.salary = 910909;
    kamal.favChar = 's';
    cout<<"The value is "<<kamal.age<<endl;
    cout<<"The value is "<<kamal.salary<<endl;
    cout<<"The value is "<<kamal.favChar<<endl;
    


    return 0;
}