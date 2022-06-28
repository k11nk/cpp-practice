#include <bits/stdc++.h>
using namespace std;

typedef long long    ll;
const int maxN = 1e5+10;

void Solution(){
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
}

int main(){

  ios::sync_with_stdio(false);
  cin.tie(0);
  //   cout.precision(10);
  //   cout << fixed;
  int t;
  t=1;
  while(t--){
    Solution();
  }
}