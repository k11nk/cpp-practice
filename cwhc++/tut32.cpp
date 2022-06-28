#include<iostream>

using namespace std;

class BankDeposit{
    int principal;
    int years;
    float rate;
    int Rate;
    float retval;

    public:
      BankDeposit(){}
      BankDeposit(int p, int y, float r);
      BankDeposit(int p, int y, int R);
      void show(void);
};

BankDeposit :: BankDeposit(int p, int y, float r){
    principal = p;
    years = y;
    rate = r;
    retval = principal;
    for(int i = 0 ; i < years ;i++){
        retval *= (1+rate);
    }

}

BankDeposit :: BankDeposit(int p, int y, int r){
    principal = p;
    years = y;
    rate = float(r)/100;
    retval = principal;
    for(int i = 0 ; i < years ;i++){
        retval *= (1+rate);
    }

}

void BankDeposit :: show(void){
    cout<<"Return value is "<<retval<<endl;
}

int main(){
    BankDeposit bd1, bd2, bd3;
    int p, y;
    float r;
    int R;
    
    
    cout<<"Enter the value of p y and r"<<endl;
    cin>>p>>y>>r;
    bd1 = BankDeposit(p, y, r);
    bd1.show();

    cout<<"Enter the value of p y and R"<<endl;
    cin>>p>>y>>R;
    bd2 = BankDeposit(p, y, R);
    bd2.show();
    return 0;
}