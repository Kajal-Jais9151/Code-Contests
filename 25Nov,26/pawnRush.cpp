#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	
	int cnt=0;
	if(n==2){
	  cnt++;
	  n=4;
	}
	for(int i=n; i<8; i++){
	  cnt++;
	}
	cout<<cnt<<endl;
	return 0;
}