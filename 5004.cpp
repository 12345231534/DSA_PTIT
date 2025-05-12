#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >>n;
	int a[n+1];
	int f[n+1];
	for (int i=1;i<=n;i++){
		cin >>a[i];
		f[i] = 1;
	}
	
	f[1] = 1;
	for (int i=2;i<=n;i++){
		for (int j=1;j<i;j++){
			if(a[j] < a[i]){
				f[i] = max(f[i], f[j]+1);
			}
		}
	}
	int res =0;
	for (int i=1;i<=n;i++){
		res = max(res, f[i]);
	}
	cout << res;
}
