// Print the values of array by normal and loop method
// Pointer and arrays

#include <iostream>
using namespace std;

int main()
{
    // Array Example
    int marks[] = {23, 32, 53, 76}; // Here, [4] is optional we can also write this [ ] compiler already know how many elements we entered.
    cout << "These are english marks " << endl;
    cout << marks[0] << endl;
    cout << marks[1] << endl;
    marks[2] = 455;
    // we can change the value of an array
    cout << marks[2] << endl;
    cout << marks[3] << endl;

     int mathsmarks[4];
    mathsmarks[0] = 279;
    mathsmarks[1] = 239;
    mathsmarks[2] = 349;
    mathsmarks[3] = 539;
    cout << "These are  maths marks" << endl;
    cout << mathsmarks[0] << endl;
    cout << mathsmarks[1] << endl;
    cout << mathsmarks[2] << endl;
    cout << mathsmarks[3] << endl;
cout<<endl;

// How to print the content of array with the help of an loop...
cout<<"By the help of For loop"<<endl;
for(int i =0; i<4; i++)
{
    cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
}

cout<<endl;
cout<<"By the help of For loop"<<endl;

for(int i =0; i<4; i++)
{
    cout<<"The value of mathsmarks "<<i<<" is "<<mathsmarks[i]<<endl;
}
 cout<<endl;

// By the help of while loop --
cout<<"By the help of while loop"<<endl;
int k = 0;
while(k<4)
{
    cout<<"The value of marks "<<k<<" is "<<marks[k]<<endl;
  k++;
}
cout<<endl;

// By the help of Do While loop --
cout<<"By the help of Do While loop"<<endl;

int i =0;
do{
    cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
    i++;
}
while(i<4);
cout<<endl;

// Pointer and arrays
cout<<"By Pointer and arrays"<<endl;
int* p = marks;
cout<<"The value of marks[0] is "<<*p<<endl;  //Here, *p is first element that is 23 in marks variable
cout<<"The value of marks[1] is "<<*(p+1)<<endl;
cout<<"The value of marks[2] is "<<*(p+2)<<endl;
cout<<"The value of marks[3] is "<<*(p+3)<<endl;

int*P = marks;
cout<<*(P++)<<endl;
cout<<*(++P)<<endl; // here, *(p++) is on 23 because , 23 is first element of marks then *(++p) first increment by 1 then print the next value
 
 
    return 0;
}