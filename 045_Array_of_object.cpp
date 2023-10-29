#include <iostream>
using namespace std;

class Employee
{
    int id;
    int salary;

public:
    void setId(void)
    {
        salary = 122;
        cout << "Enter the id of employee " << endl;
        cin >> id;
    }
    void getId(void)
    {
        cout << "The id of this employee is " << id << endl;
        cout<<endl;
    }
};
int main()
{
    // Employee kamal, shefali, kunal, aman;
    // kamal.setId();
    // kamal.getId();
    // // kamal.salary();  // It is private shown an error

    // shefali.setId();
    // shefali.getId();

    // kunal.setId();
    // kunal.getId();

    // aman.setId();
    // aman.getId();

    Employee fb[4];  // use of array
    for (int i = 0; i < 4; i++)
    {
        fb[i].setId();
        fb[i].getId();
    }
    return 0;
}