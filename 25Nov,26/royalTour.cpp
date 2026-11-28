#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    long long n,m;
	    cin>>n>>m;
	    long long r,c;
	    cin>>r>>c;
	    
	    long long d1=max(r-1, c-1);
	    long long d2=max(r-1, m-c);
	    long long d3 = max(n - r, c - 1);
        long long d4 = max(n - r, m - c);
        
        long long minDist=min({d1,d2,d3,d4});
        
        long long height=n-1;
        long long width=m-1;
        
        long long ans=minDist + height + width + min(height, width);
        
        cout<<ans<<endl;
	}
   return 0;
}