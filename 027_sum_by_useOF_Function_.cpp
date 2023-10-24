// Sum of numbers by the use of function
#include <iostream>
using namespace std;

int sum(int a, int b, int c)
{
    int d = a + b + c;
    return d;
}

int main()
{
    int x;
    int y;
    int z;

    cout << "Enter the value of x:" << endl;
    cin >> x;
    cout << "Enter the value of y:" << endl;
    cin >> y;
    cout << "Enter the value of z:" << endl;
    cin >> z;

    cout << "The sum  is: " << sum(x, y, z) << endl;

    /*


    int sum(int a , int b){
    int c = a+b;
    return c;
    }

    int main(){
        cout<<"The sum of 3 and 6 is :"<<sum(3,6);
        return 0;
    }

    */

    /*

    // Sum of numbers by taking input from user without use of Functions

    int  x , y ,z;
    cout<<"Enter the value of x"<<endl;
    cin>>x;
    cout<<"Enter the value of y"<<endl;
    cin>>y;
    cout<<"Enter the value of z"<<endl;
    cin>>z;

    cout<<"The sum is:"<<x+y+z<<endl;

    */

    return 0;
}