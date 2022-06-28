#include<iostream>
#include<stdlib.h>

using namespace std;

typedef struct employee
{
    /* data */
    int eId;
    char favChar;
    float salary;
}ep;

union barter
{
    /* data */
    int rice;
    char car;
    float pounds;
};

int main()
{
    //structure
    ep kalp;
    kalp.eId=11;
    kalp.favChar='k';
    kalp.salary=110000000;
    cout<<"eID of Kalp is "<<kalp.eId<<endl;
    cout<<"Favourite character of Kalp is "<<kalp.eId<<endl;
    cout<<"Salary of Kalp is "<<kalp.salary<<endl;

    //union
    barter m1;
    m1.rice=66;
    cout<<m1.rice<<endl;

    //enum
    enum Meal{ breakfast, lunch, dinner};
    Meal m2 = lunch;
    cout<<(m2==2);

}

