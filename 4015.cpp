#include<bits/stdc++.h>
using namespace std;

int floor(long long a[], int n, long long k){
	int l =0, r = n-1;
	int res =-1;
	while(l<=r){
		int mid = (l+r)/2;
		if(a[mid] <= k){
			res = mid;
			l = mid+1;
		}
		else{
			r = mid-1;
		}
	}
	return res;
}

int main(){
	int t;
	cin >>t;
	while(t--){
		int n;
		long long k;
		cin >>n>>k;
		long long a[n];
		for (int i=0;i<n;i++){
			cin >>a[i];
		}
		int res = floor(a,n,k);
		if(res ==-1){
			cout << -1;
		}
		else{
			cout << res +1;
		}
		cout <<endl;
	}
}
