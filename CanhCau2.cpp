#include <bits/stdc++.h>
using namespace std;
int n,m;
vector<int> ke[1005];
bool used[1005];
vector<pair<int, int>> dscanh;
int cnt;
void dfs(int u, int s, int k){
	used[u] = true;
	for(int x : ke[u]){
		if(!used[x]){
			if(x == s && u == k || x == k && u == s){
				continue;
			}
			else
				dfs(x,s,k);
		}
	}
}
void nhap(){
	cin >>n>>m;
	for (int i=1;i<=n;i++){
		ke[i].clear();
	}
	dscanh.clear();
	memset(used, false, sizeof(used));
	for (int i =0;i<m;i++){
		int x,y;
		cin >>x>>y;
		dscanh.push_back({x,y});
		ke[x].push_back(y);
		ke[y].push_back(x);
	}
}
int tplt(int s, int k){
	cnt =0;
	for(int i=1;i<=n;i++){
		if(!used[i]){
			cnt++;
			dfs(i,s,k);
		}
	}
	return cnt;
}

int main(){
	int t;
	cin >>t;
	while(t--){
		nhap();
		int cc = tplt(0,0);
		int dem =0;
		for (auto it : dscanh){
			int x = it.first;
			int y = it.second;
			memset(used, false, sizeof(used));
			if(cc < tplt(x,y)){
				cout << x<<	" "<<y<<" ";
			}
		}
		cout <<endl;
	}
}
