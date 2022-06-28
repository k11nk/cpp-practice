#include <iostream>

using namespace std;

class Employee
{
    int id;
    static int count;

public:
    void setdata(void)
    {
        cout << "Enter the id" << endl;
        cin >> id;
        count++;
    }
    void getdata(void)
    {
        cout << "The id of Employee is " << id << endl
             << "Employee no is " << count + 1000 << endl;
    }
    static void getcount(void)
    {
        cout << "The value of count is " << count << endl;
    }
};

int Employee ::count;
// int Employee ::count = 1000;
// by default static variable  will take value 0 and we can change as follow

int main()
{
    Employee Kalp, Pratham, Aryan;
    Kalp.setdata();
    Kalp.getdata();
    Employee::getcount();

    Pratham.setdata();
    Pratham.getdata();
    Employee::getcount();

    Aryan.setdata();
    Aryan.getdata();
    Employee::getcount();

    return 0;
}