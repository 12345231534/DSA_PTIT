#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >>t;
	while (t--){
		int n,m;
		cin >>n>>m;
		int a[n], b[m];
		set <int> se;
		map<int, int>mp;
		for (int i=0;i<n;i++){
			cin >>a[i];
			se.insert(a[i]);
			mp[a[i]]++;
		}
		for (int i=0;i<m;i++){
			cin >>b[i];
			se.insert(b[i]);
			mp[b[i]]++;
		}
		for (int x: se){
			cout << x<<" ";
		}
		cout << endl;
		for (const auto &pair : mp){
			if(pair.second >=2){
				cout << pair.first<<" ";
			}
		}
		cout << endl;
	}
}
