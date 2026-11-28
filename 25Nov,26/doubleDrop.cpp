#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	int n;
	cin>>n;
	long long a[n];
	for(int i=0; i<n; i++){
	    cin>>a[i];
	}

	long long sum=0;
	long long maxi=LLONG_MIN;
	
	for(int i=0; i<n; i++){
	     maxi=max(a[i], maxi);
	     sum+=a[i];
	}
	long long MAX1=sum-maxi;
    long long MAX2=LLONG_MIN;
    for(int i=0; i<n; i++){
        sum=0, maxi=INT_MIN;
        a[i]*=2;
        for(int j=0; j<n; j++){
            sum+=a[j];
            maxi=max(maxi, a[j]);
        }
        MAX2=max(MAX2, sum-maxi);
        a[i]/=2;
    }
    cout<<max(MAX1, MAX2)<<endl;
	}
    return 0;
}