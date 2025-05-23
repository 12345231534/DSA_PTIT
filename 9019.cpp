#include<bits/stdc++.h>
using namespace std;

vector<int> ke[1005];
bool used[1005];
int parent[1005];
int oke;
void dfs(int u){
	used[u] = true;
	for(int x: ke[u]){
		if(!used[x]){
			parent[x] = u;
			dfs(x);
		}
		else if(x != parent[u]){
			oke =1;
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
		oke =0;
		for(int i=1;i<=n;i++){
			if(!used[i]){
				dfs(i);
			}
		}
		if(oke){
			cout << "YES";
		}
		else cout <<"NO";
		cout << endl;
	}
}
