#include<iostream>
using namespace std;

void printsomething(int x){
    cout << "I am teaxting on tje screej via integer "<<x<<endl;
}

void printsomething(float x){
    cout << "I am now tecting bia real no "<<x<<endl;
}

int main(){
    int a=45;
    float b=69.69;
    printsomething(a);
    printsomething(b);

}