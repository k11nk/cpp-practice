#include<iostream>

using namespace std;

int main()
{
    int i,j;
    cin>>i;
    cin>>j;
    int Arr[i][j];
    for(int p  = 0; p<i;p++)
    {
        for(int q = 0; q<j;q++)
        {
            cin>>Arr[p][q];
        }
    }
    for(int p  = 0; p<i;p++)
    {
        for(int q = 0; q<j;q++)
        {
            cout<<Arr[p][q]<<" ";
        }
        cout<<endl;
    }
    return 0;

}