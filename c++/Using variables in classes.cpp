#include<iostream>
#include <string>
using namespace std;

class Klassy{
    public:
     void setName(string x){
         name = x;
     }
      string getName(){
          return name;
      }
    private:
      string name;

};

int main(){
    Klassy objek;
    objek.setName("Pappu Pajer");
    cout << objek.getName();
    return 0;
}

