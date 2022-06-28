#include<iostream>
using namespace std;

int volume(int l=1,int b=1,int w=1);

int main(){
      cout << volume(5,6);
}

int volume(int l,int b,int w){
    return l*w*b;
}