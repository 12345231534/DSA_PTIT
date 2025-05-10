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
int main(){
	int t;
	cin >>t;
	while(t--){
		cin >>n;
		oke =1;
		while(oke){
			for (int i=1;i<=n;i++){
				if(a[i] == 0) cout << "A";
				else cout << "B";
			}
			cout << " ";
			sinh();
		}
		cout << endl;
	}
}
