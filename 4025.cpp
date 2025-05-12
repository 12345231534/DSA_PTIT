#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
int main(){
	int t;
	cin >>t;
	while(t--){
		int n;
		cin >>n;
		int a[n+1];
		a[0] = 0;
		a[1] = 1;
		for (int i=2;i<=n;i++){
			a[i] = (a[i-2] + a[i-1])%mod;
		}
		cout << a[n]<<endl;
	}
}
