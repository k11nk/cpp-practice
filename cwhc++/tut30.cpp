#include <iostream>

using namespace std;

class Complex
{
    int a;
    int b;

public:
    Complex()
    {
        a = 0;
        b = 0;
    }

    Complex(int x)
    {
        a = x;
        b = 0;
    }

    Complex(int x, int y)
    {
        a = x;
        b = y;
    }

    void printnumber()
    {
        cout << "The number is " << a << " + " << b << "i" << endl;
    }
};

int
main()
{
    Complex c1;
    c1.printnumber();

    Complex c2(3);
    c2.printnumber();

    Complex c3(3, 4);
    c3.printnumber();

    return 0;
}