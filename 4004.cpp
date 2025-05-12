#include <bits/stdc++.h>
using namespace std;

long long a[51];
void ktao(){
	a[1] = 1;
	a[2] = 2;
	for (int i=3;i<=50;i++){
		a[i] = a[i-1] *2;
	}
}
int solve(int n, long long k){
	if(a[n] == k) return n;
	if(k > a[n]){
		return solve(n-1, k-a[n]);
	}
	else{
		return solve(n-1,k);
	}
}

int main(){
	int t;
	cin >>t;
	while(t--){
		int n;
		long long k;
		cin >>n>>k;
		ktao();
		cout << solve(n,k)<<endl;
	}
}
