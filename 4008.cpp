#include <bits/stdc++.h>
using namespace std;
// Quy hoach dong


int main(){
	int t;
	cin >>t;
	const int mod = 1000000007;
	while(t--){
		// b1 dinh nghia bang phuong an
		// b2 Khoi tao gia tri ban dau cho bang phuong an
		// b3 truy vet bang phuong an de doc du lieu con truoc do-> ket voi nhau theo cong thuc truy hoi
		int n;
		cin >>n;
		int f[n+1];
		f[0] = 0; f[1] = 1;
		for (int i=2;i<=n;i++){
			f[i] = f[i-1]%mod + f[i-2]%mod;
			f[i] %= mod;
		}
		cout << f[n]<<endl;
		
	}
	
}

