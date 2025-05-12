#include <bits/stdc++.h>
using namespace std;

int binary_search(int a[], int n, int k){
	int l =0, r = n-1;
	while(l<=r){
		int mid = (l+r)/2;
		if(a[mid] ==k){
			return mid;
		}
		else if(a[mid] > k){
			r = mid-1;
		}
		else{
			l = mid +1;
		}
	}
	return 0;
}

int main(){
	int t;
	cin >>t;
	while(t--){
		int n, k;
		cin >>n>>k;
		int a[n];
		for (int i=0;i<n;i++){
			cin >>a[i];
		}
		if(binary_search(a,n,k)){
			cout << binary_search(a,n,k)+1;
		}
		else{
			cout << "NO";
		}
		cout << endl;
	}
}
