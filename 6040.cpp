#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >>t;
	while (t--){
		int n,m,k;
		cin >>n>>m>>k;
		long long  a[n], b[m], c[k];
		set <int> se;
		map<long long, long long>mp;
		for (int i=0;i<n;i++){
			cin >>a[i];
			se.insert(a[i]);
			if(mp[a[i]] == 0){
				mp[a[i]]++;
			}
		}
		for (int i=0;i<m;i++){
			cin >>b[i];
			if(mp[b[i]] == 0){
				mp[b[i]]++;
			}
		}
		for (int i=0;i<k;i++){
			cin >>c[i];
			if(mp[c[i]] == 0){
				mp[c[i]]++;
			}
		}
		int oke =1;
		for (const auto &pair : mp){
			if(pair.second >=2){
				cout << pair.first<<" ";
				oke =0;
			}
		}
		if(oke) cout << "-1";
		cout << endl;
	}
}

