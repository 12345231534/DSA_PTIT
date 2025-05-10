#include <bits/stdc++.h>
using namespace std;

int n, a[20], oke;

void init(){
	for (int i=1;i<=n;i++){
		a[i] = i;
	}
}
bool check(){
	for (int i=1;i<n;i++){
		if(abs(a[i] - a[i+1]) == 1){
			return false;
		}
	}
	return true;
}
void result(){
	if(check()){
		for (int i=1;i<=n;i++){
			cout << a[i];
		}
		cout << endl;
	}
	
}
void sinh(){
	int i =n-1;
	while(i>=1 && a[i] > a[i+1]){
		i--;
	}
	if(i==0){
		oke =0;
	}
	else{
		int j = n;
		while(a[j] < a[i]) j--;
		swap(a[i], a[j]);
		sort(a+i+1, a+n+1);
	}
}

int main(){
	int t;
	cin >>t;
	while(t--){
		cin >>n;
		oke =1;
		init();
		while(oke){
			result();
			sinh();
		}
	}
}



