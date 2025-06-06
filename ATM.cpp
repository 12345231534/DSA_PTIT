#include <bits/stdc++.h>
using namespace std;

int n,k;
int a[100];
int sum;
int minVal;
int oke;
void Try(int i, int pos){
	for (int j = pos; j<=n;j++){
		sum += a[j];
		if(sum == k){
			oke=1;
			minVal = min(minVal, i);
		}
		else{
			Try(i+1, j+1);
		}
		sum -=a[i];
	}
}

int main(){
	int t;
	cin >>t;
	while(t--){
		cin >>n>>k;
		for (int i=1;i<=n;i++){
			cin >> a[i];
		}
		minVal =1e9;
		sum =0;
		oke =0;
		Try(1,1);
		if(oke){
			cout << minVal<<endl;
		}
		else cout <<-1<<endl;
	}
}
