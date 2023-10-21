#include<iostream>
using namespace std;

int main(){
float d = 34.4f;
long double e = 34.4l;

cout<<"The value of 34.4 is "<<sizeof(34.4)<<endl; // BY default long double
cout<<"The value of 34.4f is "<<sizeof(34.4f)<<endl;
cout<<"The value of 34.4F is "<<sizeof(34.4F)<<endl;
cout<<"The value of 34.4l is "<<sizeof(34.4l)<<endl;
cout<<"The value of 34.4L is "<<sizeof(34.4L)<<endl;


// 34.4 is a double number .If we specify this as a float number then we use of 34.4f now this is a float number.
// use the f end of digit to make it flaot and use of l end of digit to make it double. We also use of f and l in capital letter.


cout<<"The value of d is "<<d <<endl <<"The value of e is "<<e;
cout<<endl;





}
