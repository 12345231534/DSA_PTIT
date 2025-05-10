#include<bits/stdc++.h>
using namespace std;

bool binary_search(int a[],int k,  int n){
	int l =0, r = n-1;
	while(l<=r){
		int mid = (l+r)/2;
		if(a[mid] ==k){
			return true;
		}
		else if(a[mid] > k){
			r = mid -1;
		}
		else{
			l = mid + 1;
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
		if(binary_search(a,k,n)){
			cout << "1";
		}
		else cout <<"-1";
		cout << endl;
	}
}
