#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--){
      int n,k;
      cin>>n>>k;
      if(k<=n && n<=2*k){
          cout<<"yes"<<endl;
      }
      else{
      cout<<"no"<<endl;
      }
  }
  return 0;
}