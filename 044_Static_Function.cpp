// static function created when we want a function which access all the static variables / members

#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count;

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
    static void getCount(void)
    {
        // cout<<id; // throws an error // because id is private
        cout << "The value of count is " << count << endl;
    }
};

int Employee ::count;

int main()
{
    Employee kamal, shefali, kunal;

    kamal.setData();
    kamal.getData();
    Employee ::getCount(); // If we don't write this then ""The value of count is" don't print

    shefali.setData();
    shefali.getData();
    Employee ::getCount();

    kunal.setData();
    kunal.getData();
    Employee ::getCount();

    return 0;
}