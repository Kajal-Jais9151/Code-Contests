#include <bits/stdc++.h>
using namespace std;

int main() {
   int t;
   cin>>t;
   
   while(t--){
       int n;
       cin>>n;
       int maxi=INT_MIN;
       int arr[n];
       for(int i=0; i<n; i++){
           cin>>arr[i];
       }
       
       for(int i=0; i<n-1; i++){
           int money=0;
           for(int j=0; j<n; j++){
               if(j==i || j==i+1){
                   money+=arr[j]/2;
               }
               else{
               money+=arr[j];
               }
           }
           maxi=max(maxi,money); 
       }
         cout<< maxi<<endl;
   }
   return 0;
}