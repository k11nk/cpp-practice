#include<iostream>

using namespace std;

class Complex{
    int a,b;
    public:
    Complex(void);
    void printcomplex(){
        cout << "The complex number is "<<a<<"+"<<b<<"i"<<endl;
     }
};

Complex :: Complex(void){
    a = 10;
    b = 45;
}

int main()
{
    Complex c1;
    c1.printcomplex();
    return 0;

}