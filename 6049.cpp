#include <bits/stdc++.h>
using namespace std;

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
		long long s =0;
		sort(a, a+n);
		for (int i=0;i<n;i++){
			int x = lower_bound(a+i+1, a+n, k+a[i]) - a;
			s += x - i - 1;
		}
		cout << s<<endl;
	}
}

