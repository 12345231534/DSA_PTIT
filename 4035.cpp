#include <bits/stdc++.h>
using namespace std;

long long mod = 1e9+7;

long long poww(long long a, long long b){
	if(b==1) return a;
	long long x = poww(a, b/2);
	if(b%2 == 0){
		return (x*x)%mod;
	}
	else{
		return (((x*x)%mod)*a)%mod;
	}
}

int main(){
	while(true){
		long long a;
		long long b;
		cin >>a >>b;
		if(a ==0 && b==0) {
			return 0;
		}
		if(b==0){
			cout << "1"<<endl;
		}
		else
		cout << poww(a,b)<<endl;
	}
}
