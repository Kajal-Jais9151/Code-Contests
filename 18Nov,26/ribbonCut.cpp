#include <bits/stdc++.h>
using namespace std;

bool found(int first, int second){
    while(first<second){
        if((first*2) == second){
           return true;
        }
          first++;
          second--;
    }
      return false; 
}
    
int main() {
      
      int n;
      cin>>n;
      
      int first=1, second=n-1;
       if(found( first, second )){
           cout<<"YES"<<endl;
           return 0;
       }
      
           cout<<"NO"<<endl;
       
       return 0;
}