// For better readable code . 
#include<iostream>
using namespace std;

int main(){
    enum Meal {breakfast, lunch, dinner};
    cout<<breakfast<<endl;
    cout<<lunch<<endl;
    cout<<dinner<<endl;
    cout<<endl;
    
    Meal m1 = lunch;
    cout<<m1<<endl;

    return 0;
}