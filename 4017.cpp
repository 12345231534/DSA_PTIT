#include <bits/stdc++.h>
using namespace std;

int solve(long long a[], long long b[], int n){
	for (int i=0;i<n-1;i++){
		if(a[i] != b[i]){
			return i+1;
		}
	}
	return n;
}

int main(){
	int t;
	cin >>t;
	while(t--){
		int n;
		cin >>n;
		long long a[n], b[n-1];
		for (int i =0;i<n;i++){
			cin >>a[i];
		}
		for (int i=0;i<n-1;i++){
			cin >>b[i];
		}
		cout << solve(a,b,n)<<endl;
	}
}
