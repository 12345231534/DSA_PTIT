#include <bits/stdc++.h>
using namespace std;

int n, oke, a[100];

void ktao(){
	for (int i=1;i<=n;i++){
		a[i] = 0;
	}
}
void sinh(){
	int i =n;
	while(i>=1 && a[i] == 9){
		a[i] = 0;
		i--;
	}
	if(i==0){
		oke =0;
	}
	else a[i] = 9;
}

int main(){
	int t;
	cin >>t;
	while(t--){
		int x;
		n= 32;
		cin >>x;
		oke =1;
		ktao();
		sinh();
		while(oke){
			string s ="";
			for (int i=1;i<=n;i++){
				s += to_string(a[i]);
			}
			long long tmp = stoll(s);
			if(tmp %x==0){
				cout << tmp<<endl;
				break;
			}
			
			sinh();
		}
	}
}
