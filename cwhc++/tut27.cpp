#include <iostream>

using namespace std;

class Complex;

class Calculator
{
public:
    int add(int a, int b)
    {
        return a + b;
    }
    int sumReal(Complex, Complex);
    int sumComp(Complex, Complex);
};

// int Calculator :: sumReal(Complex o1, Complex o2){    return o1.a + o2.a;}

class Complex
{
    int a, b;
    // friend int Calculator ::sumReal(Complex, Complex);
    // friend int Calculator ::sumComp(Complex, Complex);
    friend class Calculator;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

int Calculator ::sumReal(Complex o1, Complex o2) { return o1.a + o2.a; }
int Calculator ::sumComp(Complex o1, Complex o2) { return o1.b + o2.b; }

int main()
{
    Complex c1, c2;
    c1.setNumber(3, 4);
    c2.setNumber(8, 6);

    Calculator calc;
    int res = calc.sumReal(c1, c2);
    cout << "The sum of real part of complex = " << res << endl;

    int resc = calc.sumComp(c1, c2);
    cout << "The sum of complex part of complex = " << resc << endl;

    return 0;
}