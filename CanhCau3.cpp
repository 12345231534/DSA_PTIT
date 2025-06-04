#include <bits/stdc++.h>
using namespace std;

vector<int> ke[1005];
bool used[1005];
vector<pair<int,int>> a;
int n,m;
void dfs(int u, int s, int k){
	used[u] = true;
	for (int x:ke[u]){
		if(!used[x]){
			if(x == s && u == k || x == k && u == s){
				continue;
			}
			else{
				dfs(x,s,k);
			}
		}
		
	}
}
int tplt(int s, int k){
	int cnt =0;
	memset(used, false, sizeof(used));
	for (int i=1;i<=n;i++){
		if(!used[i]){
			++cnt;
			dfs(i,s,k);
		}
	}
	return cnt;
}

int main(){
	int t;
	cin >>t;
	while(t--){
		cin >>n>>m;
		for(int i=1;i<=n;i++){
			ke[i].clear();
		}
		a.clear();
		memset(used, false, sizeof(used));
		for(int i=0;i<m;i++){
			int x, y; cin >>x>>y;
			ke[x].push_back(y);
			ke[y].push_back(x);
			a.push_back({x,y});
		}
		int cc = tplt(0,0);
		for (auto it: a){
			int s = it.first;
			int k = it.second;
			if(cc < tplt(s,k)){
				cout << s<<" "<<k<<" ";
			}
		}
	}
}
