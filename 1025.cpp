#include <bits/stdc++.h>
using namespace std;
int n,k,a[100], oke;

void ktao(){
	for (int i=1;i<=k;i++){
		a[i] = i;
	}
}
void sinh(){
	int i =k;
	while(i>=1 && a[i] == n-k+i){
		i--;
	}
	if(i==0){
		oke =0;
	}
	else{
		a[i]++;
		for (int j=i+1;j<=k;j++){
			a[j] = a[j-1] +1;
		}
	}
}


int main(){
	int t;
	cin >>t;
	while(t--){
		cin >>n >>k;
		oke =1;
		ktao();
		while(oke){
			for(int i=1;i<=k;i++){
				cout << (char)('A' + a[i] - 1);
			}
			cout << endl;
			sinh();
		}
	}
}
