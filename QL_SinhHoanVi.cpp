#include <bits/stdc++.h>
using namespace std;

int n, a[100], daxet[100];

void result(){
	for (int i=1;i<=n;i++){
		cout << a[i] <<" ";
	}
	cout << endl;
}

void Try(int i){
	for (int j=1;j<=n;j++){
		if(daxet[j] ==0){
			a[i] = j;
			daxet[j] = 1;
			if(i==n){
				result();
			}
			else{
				Try(i+1);
			}
			daxet[j] =0;
		}
	}
}

int main(){
	cin >>n;
	memset(daxet, 0, sizeof(daxet));
	Try(1);
}
