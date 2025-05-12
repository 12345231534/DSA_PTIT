#include <bits/stdc++.h>
using namespace std;

int maxCrossing(int a[], int l,int m, int r){
	int sumLeft =0, sumRight =0;
	int maxLeft =0, maxRight = 0;
	for (int i=m;i>=l;i--){
		sumLeft += a[i];
		maxLeft = max(maxLeft, sumLeft);
	} 
	for (int i=m+1;i<=r;i++){
		sumRight += a[i];
		maxRight = max(maxRight, sumRight);
	}
	return maxLeft + maxRight;
}

int maxSum(int a[], int l, int r){
	if(l==r) return a[l];
	int m = (l+r)/2;
	int maxLeft = maxSum(a,l, m);
	int maxRight = maxSum (a, m+1, r);
	int maxCross = maxCrossing(a,l,m,r);
	return max(max(maxLeft, maxRight), maxCross);
}

int main(){
	int t;
	cin >>t;
	while(t--){
		int n;
		cin >>n;
		int a[n];
		for (int i=0;i<n;i++){
			cin >>a[i];
		}
		int res = maxSum(a, 0,n-1);
		cout << res<<endl;
	}
}
