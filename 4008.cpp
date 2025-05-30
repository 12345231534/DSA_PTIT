#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
struct Matrix{
	long long f[2][2];
};

Matrix operator * (Matrix a, Matrix b){
	Matrix c;
	for (int i=0;i<2;i++){
		for (int j=0;j<2;j++){
			c.f[i][j] = 0;
			for (int k=0;k<2;k++){
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
		int n;
		cin >>n;
		Matrix a;
		a.f[0][0] = a.f[1][0] = a.f[0][1] =1;
		a.f[1][1] = 0;
		Matrix c = powMod(a, n);
		cout << c.f[0][1]<<endl;
	}
}
