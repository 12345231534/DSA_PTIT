#include <bits/stdc++.h>
using namespace std;

int n,k, oke, a[100];
void ktao(){
	for (int i=1;i<=n;i++){
		a[i] = 0;
	}
}
void sinh(){
	int i =n;
	while(i >=1 && a[i] == 1){
		a[i] =0;
		i--;
	}
	if(i==0){
		oke =0;
	}
	else{
		a[i] = 1;
	}
}
bool check(){
	int cnt =0;
	for (int i=1;i<=n;i++){
		if(a[i] == 1){
			cnt++;
		}
	}
	if(cnt ==k){
		return true;
	}
	else return false;
}
int main(){
	int t;
	cin >>t;
	while(t--){
		cin >>n>>k;
		oke =1;
		while(oke){
			if(check()){
				for (int i=1;i<=n;i++){
					cout << a[i];
				}
				cout << endl;
				
			}
			sinh();
		}
	}
}
