#include<iostream>
#include<cmath>
using namespace std;

int main(){
    float a;
    float p = 25000;
    float r = 0.025;

    for(int month=1 ; month <10 ;month++){
        a = p * pow(1+r,month);
        cout << month <<"-----"<<a<<endl;
    }
}