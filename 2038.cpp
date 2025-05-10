#include <bits/stdc++.h>
using namespace std;

int n,k, a[20], x[20];
void init(){
	cin >>n>>k;
	for (int i=1;i<=n;i++){
		cin >>a[i];
	}
	sort(a+1, a+n+1);
}
void Try(int i, int pos){
	for (int j =pos; j<=n;j++){
		x[i] = a[j];
		if(i==k){
			for (int l =1;l<=i;l++){
				cout << x[l]<<" ";
			}
			cout << endl;
		}
		else{
			Try(i+1, j+1);
		}
	}
}
int main(){
	int t;
	cin >>t;
	while(t--){
		init();
		Try(1,1);
	}
}
