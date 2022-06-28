#include<iostream>
using namespace std;

int main(){
    int age;
    int money;
    cout << "Enter your age Sir/Maam \n";
    cin >>age;
    cout << "Enter the amount of Money \n";
    cin >> money;
    if(age>21 && money>500){
        cout <<"You are allowed to Join us Sir/Maam \n";
    }
}