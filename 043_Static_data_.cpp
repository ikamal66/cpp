// Static data members
// static varible is initilize out of the class
// There is only one static variable and share by all the objects
#include <iostream>
using namespace std;

class Employee
{
    int id;
    // int counter;
    static int count; // if count is static then it take memory only one time then after it update
    // static variable by default initialize by 0
public:
    void setData(void)
    {
        cout << "Enter the id" << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The id of this Employee is " << id << " and this is employee number " << count << endl;
    }
};

// count is the static data member of class Employee
int Employee ::count; // defalut value is 0
// int Employee ::  count = 100;  // If we want to start the number from 100 in static variable

int main()
{
    Employee kamal, shefali, kunal;
    // kamal.id = 1; // cannot do this as id and count are private
    // kamal.count = 1;

    kamal.setData();
    kamal.getData();

    // kamal.setData();
    // kamal.getData();

    shefali.setData();
    shefali.getData();

    kunal.setData();
    kunal.getData();

    return 0;
}