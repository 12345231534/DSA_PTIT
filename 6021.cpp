#include <bits/stdc++.h>
using namespace std;

int binary_search(int a[], int n, int k){
	int l =0, r = n-1;
	while(l<=r){
		int mid = (l+r)/2;
		if(a[mid] == k){
			return mid;
		}
		else if(a[mid] < k){
			l = mid+1;
		}
		else{
			r = mid -1;
		}
	}
	return -1;
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
		for (int i=0;i<n;i++){
			if(a[i] ==k){
				cout << i+1<<endl;
				break;
			}
			
		}
		
	}
}
