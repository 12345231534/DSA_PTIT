#include <bits/stdc++.h>
using namespace std;

int n,k,a[100],x[100],sum;

void init(){
	cin >>n>>k;
	sum =0;
	for (int i=1;i<=n;i++){
		cin >>a[i];
	}
}
void Result(int i){
	for (int j =1;j<=i;j++){
		cout << x[j]<<" ";
	}
	cout << endl;
}
void Try(int i, int pos){
	for (int j = pos; j<=n;j++){
		x[i] = a[j];
		sum += a[j];
		if(sum ==k){
			Result(i);
		}
		else{
			Try(i+1, j+1);
		}
		sum -= a[j];
	}
}
int main(){
	init();
	Try(1,1);
}
