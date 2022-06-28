#include<iostream>
using namespace std;

int add(int x,int y){
    int answer = x + y;
    return answer; 
}

int main(){
    int a,b;
    cout << "Enter your first value \n";
    cin>>a;
    cout<<"Enter your another value \n";
    cin>>b;
    cout<<"Addition of your numbers is "<<add(a,b)<<endl;
    return 0;
}