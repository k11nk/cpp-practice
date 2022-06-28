#include<iostream>
using namespace std;

int main(){
 int age;
 int total=0;
 int enteries=0;
 
 cout << "Enter first persons age or -1 to quit "<<endl;
 cin >> age;

 while(age != -1){
     total = total + age;
     enteries++;
     cout << "Enter persons age or -1 to quit "<<endl;
     cin>>age;
 }
 cout << "Total no of people are= "<< enteries<<endl;
 cout << "Average age of peoples are= "<< total/enteries << endl;
 return 0;
}