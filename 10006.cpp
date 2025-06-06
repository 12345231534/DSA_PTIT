#include <bits/stdc++.h>
using namespace std;

vector<int> ke[1005];
bool used[1005];
vector<pair<int,int>> dscanh;

int n,m,k;
void dfs(int u){
	used[u] = true;
	for (int x:ke[u]){
		if(!used[x]){
			dscanh.push_back({u,x});
			dfs(x);
		}
	}
}

int main(){
	int t;
	cin >>t;
	while(t--){
		cin >>n>>m>>k;
		for (int i=1;i<=n;i++){
			ke[i].clear();
		}
		memset(used, false, sizeof(used));
		dscanh.clear();
		for(int i=0;i<m;i++){
			int x,y;
			cin >>x>>y;
			ke[x].push_back(y);
			ke[y].push_back(x);
		}
		dfs(k);
		int oke =1;
		// di qua tat ca cac canh
		for (int i=1;i<=n;i++){
			if(used[i] == false){
				oke =0;
			}
		}
		if(oke && dscanh.size() == n-1){
			for (auto it : dscanh){
				cout << it.first<<" "<<it.second<<endl;
			}
		}
		else{
			cout << -1<<endl;
		}
	}
}
