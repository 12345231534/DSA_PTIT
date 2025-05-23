#include <bits/stdc++.h>
using namespace std;

int n,m,s,t;
vector<int> ke[1005];
int parent[1005];
bool used[1005];

void dfs(int u){
	used[u] = true;
	for(int x : ke[u]){
		if(!used[x]){
			parent[x] = u;
			dfs(x);
		}
	}
}

int main(){
	int k;
	cin >>k;
	while(k--){
		cin >>n>>m>>s>>t;
		memset(used, false, sizeof(used));
		memset(parent, 0, sizeof(parent));
		for(int i=1;i<=n;i++){
			ke[i].clear();
		}
		for (int i=0;i<m;i++){
			int x, y;
			cin >>x>>y;
			ke[x].push_back(y);
			ke[y].push_back(x);
		}
		dfs(s);
		if(used[t]){
			vector<int> res;
			while(t !=s){
				res.push_back(t);
				t = parent[t];
			}
			res.push_back(t);
			reverse(res.begin(),res.end());
			for (int x : res){
				cout << x<<" ";
			}
		}
		else{
			cout << "-1";
		}
		cout << endl;
	}
}
