#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >>t;
	while(t--){
		int m,n,k;
		cin >>m>>n>>k;
		int a[m], b[n];
		for (int i=0;i<m;i++){
			cin >> a[i];
		}
		for (int i=0;i<n;i++){
			cin >>b[i];
		}
		int i=0, j=0;
		vector<int> v;
		while(i<m && j<n){
			if(a[i] <= b[j]){
				v.push_back(a[i++]);
			}
			else{
				v.push_back(b[j++]);
			}
		}
		while(i<m) v.push_back(a[i++]);
		while(j<n) v.push_back(b[j++]);
		cout << v[k-1]<<endl;
		
	}
}
