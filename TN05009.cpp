#include<bits/stdc++.h>
using namespace std;

vector<int> ke[1005];
bool used[1005];
int parent[1005];
int d;
int oke;
void dfs(int u){
	if(oke) return;
	used[u] = true;
	for(int x: ke[u]){
		if(!used[x]){
			parent[x] = u;
			dfs(x);
		}
		else if(x != parent[u] && x==1){
			d = u;
			oke =1;
			return;
		}
	}
}
int main(){
	int t;
	cin >>t;
	while(t--){
		int n,m;
		cin >>n>>m;
		for (int i=1;i<=n;i++){
			ke[i].clear();
		}
		memset(used, false, sizeof(used));
		memset(parent, 0, sizeof(parent));
		for (int i=0;i<m;i++){
			int x, y;
			cin >>x>>y;
			ke[x].push_back(y);
			ke[y].push_back(x);
		}
		for (int i=1;i<=n;i++){
			sort(ke[i].begin(), ke[i].end());	
		}
		d=0;
		oke =0;
		dfs(1);
		if(oke){
			vector<int> res;
			while(d != 1){
				res.push_back(d);
				d = parent[d];
			}
			cout << 1<<" ";
			for(int i = res.size()-1; i>=0;i--){
				cout << res[i]<<" ";
			}
			cout << 1;
		}
		else cout <<"NO";
		cout << endl;
	}
}
