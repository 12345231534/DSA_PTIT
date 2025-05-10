#include <bits/stdc++.h>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(const pair<int, int> &a, const pair<int, int> &b){
	if(a.second == b.second){
		return a.first < b.first;
	}
	return a.second > b.second;
}
int main(){
	int t;
	cin >>t;
	while(t--){
		int n; cin >>n;
		int a[n];
		map<int, int> mp;
		for (int i=0;i<n;i++){
			cin >>a[i];
			mp[a[i]]++;
		}
		vector <pair<int, int>> v(mp.begin(),mp.end());
		sort(v.begin(), v.end(),cmp);
		for (auto it : v){
			for (int i =0;i<it.second;i++){
				cout << it.first<<" ";
			}
		}
		cout <<endl;
	}
}
