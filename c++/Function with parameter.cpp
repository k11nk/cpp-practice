#include<iostream>
using namespace std;

void Age(int x){
    cout << "Your Age is "<<x<<endl;
}

int main(){
    int a,b;
    cout << "Enter the Year you were born in \n";
    cin >> a;
    b = 2021 - a;
    Age(b);
    return 0;
}