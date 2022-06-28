#include<iostream>
#include<string>
using namespace std;

class Kloss{
    public:
      Kloss(int z){
       setAge(z);
      }
      void setAge(int x){
          age = x;
      }
      int getAge(){
          return age;
      }
    private:
         int age;
       
};

 int main(){
     Kloss ko(18);
     cout << ko.getAge();
     return 0;
     
 }