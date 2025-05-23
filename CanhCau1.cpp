#include <bits/stdc++.h>
using namespace std;
int n,m;
set<int> ke[1005];
bool used[1005];
vector<pair<int, int>> dscanh;
int cnt;
void dfs(int u){
	used[u] = true;
	for(int x : ke[u]){
		if(!used[x]){
			dfs(x);
		}
	}
}
int tplt(){
	cnt =0;
	for(int i=1;i<=n;i++){
		if(!used[i]){
			cnt++;
			dfs(i);
		}
	}
	return cnt;
}

int main(){
	int t;
	cin >>t;
	while(t--){
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
			ke[x].insert(y);
			ke[y].insert(x);
			
		}
		int cc = tplt();
		int dem =0;
		for (auto it : dscanh){
			int x = it.first;
			int y = it.second;
			ke[x].erase(y);
			ke[y].erase(x);
			memset(used, false, sizeof(used));
			if(cc < tplt()){
				if(x<y)
				cout << x<<	" "<<y<<" ";
			}
			ke[x].insert(y);
			ke[y].insert(x);
		}
		cout <<endl;
	}
}
