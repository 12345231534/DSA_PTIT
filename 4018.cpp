#include <bits/stdc++.h>
using namespace std;

int Count0(int a[], int l, int r){
	int m = (l+r)/2;
	if(l>r) return 0;
	if(a[m] ==0) {
		return Count0(a,m+1,r) + m-l+1;
	}
	else{
		return Count0(a, l, m-1);
	}
	
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
		cout << Count0(a, 0, n-1)<<endl;
	}
}
