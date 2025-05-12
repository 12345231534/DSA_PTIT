#include <bits/stdc++.h>
using namespace std;
int f[1001][1001];
int main(){
	int t;
	cin >>t;
	while(t--){
		int n, v;
		cin >>n>>v;
		int a[n+1], c[n+1];
		// a the tich, c gia tri
		for (int i=1;i<=n;i++){
			cin >>a[i];
		}
		for (int i=1;i<=n;i++){
			cin >>c[i];
		}
		f[1001][1001] ={0};
		for (int i=1;i<=n;i++){
			for (int j=1;j<=v;j++){
				if(j >= a[i]){
					f[i][j] = max(f[i-1][j-a[i]] + c[i], f[i-1][j]);
				}
				else{
					f[i][j] = f[i-1][j];
				}
			}
		}
		cout << f[n][v]<<endl;
	}
}
