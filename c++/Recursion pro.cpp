#include<iostream>
using namespace std;

int factorialfinder(int x){
    if(x==1){
        return 1;              //this is base case what we needed to make a recursive function
    }else{
        return x*factorialfinder(x-1);
    }
}

int main(){
    int a;
    cout<<"ENTER THE NUMBER OF WHICH YOU NEED FACTORIAL "<<endl;
    cin >>a;
    cout << factorialfinder(a)<<endl;
}