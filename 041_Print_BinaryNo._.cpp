// Topic --->  print of Binary number and their reverse

// OOPs  -- classes  and objects

// C++  --> initally called --> C with classes by Stroustroup
// class --> extension  of Structures (in C)
// structures had limitations
//    - members are public
//    - No methods
// classes --> structures + more
// classes ---> can have methods and properties //  properties -- Employee(salary , employee name,increase_salary)
// classes --> can make few members as Private & few as Public

// structures in C++ are typedefed
// You can declare objects along with the class declaration like this:
/*
  class Employee{
    Class definition
  } aman , kamal , shefali ,kunal;
*/
// kamal.salary  = it  makes no sense if salary is private

// Nesting of member functions
// koi bhi ek function hai jo already bana rakha hai aapka vo private variable use kar raha hai, apn oos function se dusre function ko call kar sakte hai bina dot lagaye

#include <iostream>
#include <string>
using namespace std;

class binary
{
    // private:  // class by default is private
    string s; // s is private number because by default class me sab kuch private hota hai
    // String  binary number ko input karega
    // void chk_bin(void);  // If, we made this private

public:
    void read(void);            // read the data
    void chk_bin(void);         // binary hai ya nhi ye check karta hai
    void ones_compliment(void); // Reverse the value ,if there is 1 it changed into 0 and if 0 it changed into 1
    void display(void);         // It display the number

}; // There is need of semicolon after the curly braces in class function

void binary ::read(void)
{ // :: is scope resolution operator
    cout << "Enter a binary number" << endl;
    cin >> s;
}

void binary ::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1') // AND operator returns true if both operands are true and returns false otherwise
        {
            cout << "Incorrect binary format" << endl;
            exit(0);
        }
    }
}
void binary ::ones_compliment(void)
{
    // chk_bin(); // Nested  // s. likhne ki jarurat nhi padi , object ki jarurat nhii padi
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }

        else
        {
            s.at(i) = '0';
        }
    }
}

void binary ::display(void)
{
    cout << "Displaying your binary number" << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}

int main()
{

    binary b; // here, b is an object name
    b.read();
    b.chk_bin();
    b.display();
    b.ones_compliment(); // If we use this before the b.display(); then it don't reverse the number in binary
    b.display();

    return 0;
}