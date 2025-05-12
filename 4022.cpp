#include <bits/stdc++.h>
using namespace std;

int a[26];
char c[26];
void ktao(){
	a[1] = 1;
	a[2] = 2;
	for (int i=3;i<26;i++){
		a[i] = a[i-1] *2;
	}
	c[1] = 'A';
	for(int i=2;i<26;i++){
		c[i] = c[i-1] + 1;
	}
}
char solve(int n, int k){
	if(a[n] == k){
		return c[n];
	}
	if(k > a[n]){
		return solve(n-1, k-a[n]);
	}
	else{
		return solve(n-1, k);
	}
}
int main(){
	int t;
	cin >>t;
	while(t--){
		int n,k;
		cin >>n>>k;
		ktao();
		cout << solve(n,k)<<endl;
	}
}
