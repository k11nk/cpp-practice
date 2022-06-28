#include<iostream>

using namespace std;

class Complex{
    int x;
    int y;
    public:
     void setdata(int v1, int v2){
        x = v1;
        y = v2;
     }
     void getsum(Complex o1 , Complex o2){
        x = o1.x + o2.x;
        y = o1.y + o2.y;
     }
     void printcomplex(){
        cout << "The complex number is "<<x<<"+"<<y<<"i"<<endl;
     }
};

int main()
{
    Complex c1,c2,c3;

    c1.setdata(1,2);
    c1.printcomplex();

    c2.setdata(3,4);
    c2.printcomplex();

    c3.getsum(c1,c2);
    c3.printcomplex();

    return 0;
}