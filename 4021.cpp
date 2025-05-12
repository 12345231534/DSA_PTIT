#include <bits/stdc++.h>
using namespace std;

long long a[93];
void ktao(){
	a[1] = 1;
	a[2] = 1;
	for (int i=3;i<93;i++){
		a[i] = a[i-2] + a[i-1];
	}
}
char solve(int n, long long k){
	if(n==1) return '0';
	if(n==2) return '1';
	long long x = a[n];
	if(k>a[n-2]){
		return solve(n-1, k-a[n-2]);
	}
	else{
		return solve(n-2, k);
	}
}
int main(){
	int t;
	cin >>t;
	while(t--){
		int n;
		cin >>n;
		long long k;
		cin >>k;
		ktao();
		cout <<solve(n,k)<<endl;
	}
}
