#include<iostream>

using namespace std;

int main()
{
    int n;
  cin>>n;
  int numR=n*2-1;
  int ctr=(n*2-2)/2;

  for(int i=0;i<numR;i++){
      for(int j=0;j<numR;j++){
          int curr=max(abs(i-ctr),abs(j-ctr));
          cout<<curr+1<<" ";
      }
      cout<<endl;
  }

  return 0;


}