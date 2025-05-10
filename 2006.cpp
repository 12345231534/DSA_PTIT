#include <bits/stdc++.h>
using namespace std;

int n,k, a[100], x[100];
int sum;
void Try(int i, int pos){
	for (int j = pos; j<=n;j++){
		x[i] = a[j];
		sum += a[j];
		if(sum == k){
			for (int l = 1;l<= i;l++){
				cout << x[l]<<" ";
			}
			cout << endl;
		}
		else{
			Try(i+1, j+1);
		}
		sum -= a[j];
	}
}
int main(){
	int t;
	cin >>t;
	while(t--){
		cin >>n>>k;
		sum =0;
		for (int i=1;i<=n;i++){
			cin >> a[i];
		}
		sort(a+1, a+n+1);
		memset(x, 0, sizeof(x));
		Try(1,1);
	}
}
