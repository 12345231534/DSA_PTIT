#include <bits/stdc++.h>
using namespace std;

int n,k;
int a[1005];

void ktao(){
	for (int i=1;i<=k;i++){
		a[i] = i;
	}
}
int oke;
void sinh(){
	int i =k;
	while(i >=1 && a[i] == n-k+i){
		i--;
	}
	if(i==0){
		oke =0;
	}
	else{
		a[i]++;
		for (int j = i+1;j<=k;j++){
			a[j] = a[j-1] +1;
		}
	}
}

int main(){
	int t;
	cin >>t;
	while(t--){
		cin >>n>>k;
		for (int i=1;i<=k;i++){
			cin >>a[i];
		}
		oke =1;
		sinh();
		if(oke){
			for (int i=1;i<=k;i++){
				cout << a[i]<<" ";
			}
		}
		else{
			for (int i=1;i<=k;i++){
				cout << i<<" ";
			}
		}
		cout <<endl;
	}
}
