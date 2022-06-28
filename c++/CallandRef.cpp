#include<iostream>

using namespace std;

//Calling the value 
/*void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x,y;
    cin>>x>>y;
    cout<<"x is "<<x<<"\ny is "<<y<<endl;
    swap(x,y);
    cout<<"x is "<<x<<"\ny is "<<y<<endl;
    return 0;
}*/

// calling by refrence
/*void swapreference(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x,y;
    cin>>x>>y;
    cout<<"x is "<<x<<"\ny is "<<y<<endl;
    swapreference(&x,&y);
    cout<<"x is "<<x<<"\ny is "<<y<<endl;
    return 0;
}*/

//callbyreference
void swapreferencevar(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x,y;
    cin>>x>>y;
    cout<<"x is "<<x<<"\ny is "<<y<<endl;
    swapreferencevar(x,y);
    cout<<"x is "<<x<<"\ny is "<<y<<endl;
    return 0;
}