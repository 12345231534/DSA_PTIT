#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >>t;
	int mod = 1e9+7;
	while(t--){
		int n;
		cin >>n;
		int a[n];
		for (int i=0;i<n;i++){
			cin >>a[i];
		}
		sort(a, a+n);
		long long res =0;
		for (int i=0;i<n;i++){
			res += i * a[i];
			res %=mod;
		}
		cout << res<<endl;
	}
}
