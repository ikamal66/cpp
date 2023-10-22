// use of Break and Continue keyword in c++
#include<iostream>
using namespace std;

int main(){
    for(int i =0; i<=10; i++)
    {
        if(i==5){
            break; // IF WE USE OF break; then all the values stop priting after 5 .
        }
        cout<<i<<endl;

         // If we use of cout<<endl; here , then 1 line gap will occur in all termination
    }
    cout<<endl;

    

for(int i =0; i<=10; i++)
    {
        
        if(i==5){
            continue; // If we use of continue keyword then compiler don't print the above value we put in condition.
        }
         else if(i==6){
            continue;
        }
        cout<<i<<endl;
    }

    return 0;
}