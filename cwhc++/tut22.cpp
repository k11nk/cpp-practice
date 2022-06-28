#include <iostream>
#include <string>

using namespace std;

class binary
{
private:
    string s;
    void chk_bin(void);

public:
    void read(void);
    void ones(void);
    void display();
};

void binary ::read(void)
{
    cout << "Enter a number" << endl;
    cin >> s;
}

void binary ::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        /* code */
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Entered number is not binary" << endl;
            exit(0);
        }
    }
}

void binary :: ones(void)
{
    chk_bin();
    for (int i = 0; i < s.length(); i++)
    {
        /* code */
        if(s.at(i)=='0')
        {
            s.at(i) = '1';
        }else
          {
              s.at(i) = '0';
          }
    }
    
}

void binary :: display()
{
    for (int i = 0; i < s.length(); i++)
    {
        /* code */
        cout << s.at(i);
    }

    cout <<endl;
    
}

int main()
{
    binary b;
    b.read();
    //b.chk_bin();
    b.display();
    b.ones();
    b.display();

    return 0;
}