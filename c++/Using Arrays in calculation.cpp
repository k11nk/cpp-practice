#include<iostream>
using namespace std;

int main(){
    int tuna[5]={32,43,21,54,65};
    int sum=0;

    for(int x=0;x<5;x++){
        sum += tuna[x];
        cout << sum <<endl;
    }
}