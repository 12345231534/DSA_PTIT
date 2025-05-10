#include <bits/stdc++.h>
using namespace std;
int n,k, a[100], x[100];
int res;
long long sum;
void Try(int i, int pos){
	for (int j = pos; j<=n; j++){
		if(sum + a[j] <= k){
			sum += a[j];
			x[i] = a[j];
			if(sum == k){
				res = min(res, i);
			} 	
			else Try(i+1, j+1);
			sum -= a[j];
		}
	}
}

int main(){
	cin >>n>>k;
	sum =0;
	res = 1e9;
	for (int i=1;i<=n;i++){
		cin >>a[i];
	}
	Try(1,1);
	if(res == 1e9){
		cout << "-1";
	}
	else{
		cout << res;
	}
	cout << endl;	
}
