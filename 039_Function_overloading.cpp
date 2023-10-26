// Function Overloading  ----> Kisi bhi ek cheez ko multiple kaamo ke liye use karna
// volume of cylinder,cuboid and cube
// using same function name in and sum the values

#include<iostream>
using namespace std;

int sum(int a , int b){
    cout<<"Using the function with 2 arguments"<<endl;
    return a+b;
}
int sum(int a , int b , int c){
    cout<<"Using the function with 3 arguments"<<endl;

    return a+b+c;
}

// Calculate the volume of a Cylinder
float volume(double r , int h){
    return(3.14 * r * r *h);
}

// Calculate the volume of a Cube
int volume(int a){
    return (a*a*a);
}

// Calculate the volume of a Cuboid
int volume(int l , int b, int h){
    return (l * b * h);
}


int main(){

    cout<<"The sum of 4 and 7 is: "<<sum(4,7)<<endl;
    cout<<"The sum of 4 ,7 and 9 is: "<<sum(4,7,9)<<endl;

     cout<<"The volume of a Cylinder of radius 3 and height 6 is "<<volume(3,6)<<endl;
     cout<<"The volume of a Cube of side 3 is "<<volume(3)<<endl;
     cout<<"The volume of a Cuboid of 3,6,7 is "<<volume(3,6,7)<<endl;



    return 0;
}