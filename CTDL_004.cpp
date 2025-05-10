#include <bits/stdc++.h>
using namespace std;

int n,k, oke, a[100];
void ktao(){
	for (int i=1;i<=k;i++){
		a[i] = i;
	}
}
void sinh(){
	int i=k;
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
	cin >>n>>k;
	oke =1;
	ktao();
	int b[100];
	for (int i=0;i<n;i++){
		cin >> b[i];
	}
	int cnt =0;
	while(oke){
		int oke =1;
		for(int i=1;i<k;i++){
			if (b[a[i] - 1] > b[a[i+1] -1]){
				oke =0;
			}
		}
		if (oke) cnt++;
		sinh();
	}
	cout << cnt;
}
