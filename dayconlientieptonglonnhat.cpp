#include <bits/stdc++.h>
using namespace std;


int MaxCrossingArray(int a[],int l,int m,int r){
	int maxLeft= INT_MIN;
	int maxRight = INT_MIN;
	int sum =0;
	for (int i=m;i>=l;i--){
		sum += a[i];
		if(sum >maxLeft) maxLeft = sum;
	}
	sum =0;
	for (int i=m+1;i<=r;i++){
		sum += a[i];
		if(sum > maxRight)  maxRight =sum;
	}
	return maxLeft+maxRight;
}
int MaxSumArray(int a[], int l, int r){
	// bai toan 1 tim mang con lien tuc co tong lonw nhat ben trai mid
	// bai toan 2 tim mang con lien tuc co tong lonw nhat ben phai mid
	// bai toan 3 tim mang con lien tuc co tong lonw nhat 1 so ben trai mid va 1 so phan tu ben phai mid
	int m = (l+r)/2;
	if(l==r) return a[l];
	int maxLeft = MaxSumArray(a, l, m);
	int maxRight = MaxSumArray(a,m+1, r);
	int maxLeftRight = MaxCrossingArray(a, l,m, r);
	return max(max(maxLeft, maxRight), maxLeftRight);
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
		cout << MaxSumArray(a, 0, n-1)<<endl;
	}
}
