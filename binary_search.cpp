#include <bits/stdc++.h>
using namespace std;

bool binary_search(int a[], int n, int x){
	int l =0, r = n-1;
	while (l<=r){
		int midle = (l+r)/2;
		if(a[midle] == x){
			return true;
		}
		else if(a[midle] < x){
			l = midle+1;
		}
		else{
			r = midle-1;
		}
	}
	return false;
}

int main(){
	int t;
	cin >>t;
	while(t--){
		int n,k;
		cin >>n>>k;
		int a[n];
		
		for (int i=0;i<n;i++){
			cin >>a[i];
		}
		cout << binary_search(a,n,k);
	}
}
