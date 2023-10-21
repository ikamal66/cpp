#include<iostream>
using namespace std;

int main(){

int i = 1;
do{
    cout<<i<<endl;
    i++;
} 
while (i<=100);


// The plus point of do-while loop is it will execute at least one time
/*
If the condition is false it will execute at least one time:

int i = 1;
do{
    cout<<i<<endl;
    i++;
} 
while (false);



*/


    return 0;
}