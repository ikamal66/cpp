// Selection control structure: if - else ladder
#include<iostream>
using namespace std;

int main (){
int age;
cout<<"Enter your age"<<endl;
cin>>age;
if (age<=12){
    cout<<"You are child"<<endl;
}
else if(age>12 && age<18 ){
    cout<<"You are teenager"<<endl;
}
else if (age == 18){
    cout<<"You are now adult"<<endl;
}
else {
    cout<<"You are elder person";
}
    return 0;
}