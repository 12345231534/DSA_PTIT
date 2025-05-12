#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
long long n,k;
struct Matrix{
	long long f[10][10];
};

Matrix operator * (Matrix a, Matrix b){
	Matrix c;
	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++){
			c.f[i][j] = 0;
			for (int k=0;k<n;k++){
				c.f[i][j] += (a.f[i][k]%mod * b.f[k][j]%mod) %mod;
				c.f[i][j]%= mod;
			}
		}
	}
	return c;
}
Matrix powMod(Matrix a, int n){
	if(n==1) return a;
	Matrix x = powMod(a, n/2);
	if(n%2==0){
		return x*x;
	}
	else{
		return x*x*a;
	}
}
int main(){
	int t;
	cin >>t;
	while(t--){
		n,k;
		cin >>n >> k;
		Matrix a;
		for (int i=0;i<n;i++){
			for (int j=0;j<n;j++){
				cin >> a.f[i][j]; 
			}
		}

		Matrix res = powMod(a, k);
		for (int i=0;i<n;i++){
			for (int j=0;j<n;j++){
				cout << res.f[i][j]<<" ";
			}
			cout << endl;
		}
	}
}

