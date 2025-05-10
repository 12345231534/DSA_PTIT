#include <bits/stdc++.h>
using namespace std;

int n, cnt, minVal;

void Try(int n){
	if(n==0) return;
	cout << n <<endl;
	if(n==1){
		cout << "oke"<<endl;
	}
	cnt++;
	if(n%2 == 0){
		Try(n/2);
		n *=2;
	}
	if(n%3 == 0){
		Try(n/3);
		n*=3;
	}
	Try(n-1);
}

int main(){
	int t;
	cin >>t;
	while(t--){
		cin >>n;
		Try(n);
	}
}
