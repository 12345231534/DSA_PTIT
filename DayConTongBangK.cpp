#include <bits/stdc++.h>
using namespace std;

int n,k, a[100], x[100];
int sum =0;
void Try(int i, int pos){
	for (int j = pos; j<=n;j++){
		x[i] = a[j];
		sum += a[j];
		if(sum==k){
			for (int l=1;l<=i;l++){
				cout << x[l]<<" ";
			}
			cout << endl;
		}
		else if(sum <k){
			Try(i+1, j+1);
		}
		sum -= a[j];
	}
}

int main(){
	cin >>n>>k;
	for (int i=1;i<=n;i++){
		cin >>a[i];
	}
	Try(1,1);
}
