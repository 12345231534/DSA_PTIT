#include <bits/stdc++.h>
using namespace std;

int n,k, a[100];

void result(){
	for (int i=1;i<=k;i++){
		cout << a[i]<<" ";
	}
	cout << endl;
}
void Try(int i){
	for (int j = 1;j<= n;j++){
		a[i] = j;
		if(i==k){
			result();
		}
		else{
			Try(i+1);
		}
	}
}
int main(){
	cin >>n>>k;
	Try(1);
}
