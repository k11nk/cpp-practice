#include<iostream>

using namespace std;

int fib(int n){
    if(n<2)
    {
        return 1;
    }
    return fib(n-1)+fib(n-2);
}

int main()
{
    int a;
    cout<<"Enter a number \n";
    cin>>a;
    cout<<"The "<<a<<" term of fib series is "<<fib(a)<<endl;
}