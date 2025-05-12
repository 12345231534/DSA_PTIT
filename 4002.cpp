#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;	
long long dao(long long n){
	long long s =0;
	while(n){
		s = s*10 + n%10;
		n /= 10; 
	}
	return s;
}

long long poww(long long n, long long k){
	if(k==1) return n%mod;
	long long x = poww(n, k/2);
	if(k%2==0){
		return (x*x) % mod;
	}
	else{
		return ((x*x)%mod*n)%mod;
	}
}
int main(){
	int t;
	cin >>t;
	while(t--){
		long long n;
		cin >>n;
		long long k = dao(n);
		long long res = poww(n,k);
		cout << res<<endl;
	}
}
