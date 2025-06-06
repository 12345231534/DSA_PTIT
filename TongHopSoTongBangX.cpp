#include <bits/stdc++.h>
using namespace std;

int n,k;
int a[30];
int x[10];
void Try(int i, int pos, int sum ){
	for (int j = pos; j<=n;j++){
		x[i] = a[j];
		if(sum + a[j] == k){
			for (int l = 1;l<=i;l++){
				cout << x[l]<<" ";
			}
			cout << endl;
		}
		else if (sum + a[j] < k){
			Try(i+1,j,sum+a[j]);
		}
	}
}

int main(){
	int t;
	cin >>t;
	while(t--){
		cin >>n>>k;
		for (int i=1;i<=n;i++){
			cin >>a[i];
		}
		sort(a+1,a+n+1);
		Try(1,1,0);
	}
}
