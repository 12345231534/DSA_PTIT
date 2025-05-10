#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >>t;
	while(t--){
		int n,m;
		cin >>n>>m;
		int a[n], b[m];
		set<int> sa,sb,s;
		map<int, int> mp;
		for (int i=0;i<n;i++){
			cin >>a[i];
			sa.insert(a[i]);
			s.insert(a[i]);
		}
		for (int i=0;i<m;i++){
			cin >>b[i];
			sb.insert(b[i]);
			s.insert(b[i]);
		}
		for (int x : sa){
			mp[x]++;
		}
		for (int x: sb){
			mp[x]++;
		}
		for (int x : s){
			cout << x<< " ";
		}
		cout<< endl;
		for (auto x : mp){
			if(x.second >= 2){
				cout <<x.first<<" ";
			}
		}
		cout << endl;
	}
}
