#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >>t;
	while(t--){
		int n,k;
		cin >>n>>k;
		long long a[n];
		for (int i=0;i<n;i++){
			cin >> a[i];
		}
		sort(a, a+n);
		long long s =0;
		for (int i=0;i<n-1;i++){
			for (int j=i+1;j<n;j++){
				int x = lower_bound(a+j+1, a+n, k - a[i] - a[j]) -a ;
				s += x -j -1;
			}
		}
		cout << s<<endl;
		
	}
}
