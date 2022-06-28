#include<iostream>

using namespace std;

class Employee
{
    int id;

    public:
     void setid(void){
        cout<<"Enter the id "<<endl;
        cin>>id;
     }
     void getid(void){
        cout<<"The id of employee is "<<id<<endl;
     }
};

int main()
{
    Employee f[4];
    for (int i = 0; i < 4; i++)
    {
        /* code */
        f[i].setid();
        f[i].getid();
    }
    
    return 0;
}
