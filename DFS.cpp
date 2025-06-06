#include <bits/stdc++.h>
using namespace std;

vector<int> ke[1005];
bool used[1005];
int n,m;
int parent[1005];
int ok;
int color[1005];
void dfs(int u){
	color[u] = 1;
	used[u] = true;
	if(ok) return;
	for (int x : ke[u]){
		if(!used[x]){
			dfs(x);
		}
		else if(color[x] == 1){
			ok =1;
		}
	}
	color[u] = 2;
}
int tplt(){
	int cnt =0;
	for (int i=1;i<=n;i++){
		if(!used[i]){
			dfs(i);
			cnt++;
		}
	}
	return cnt;
}

void dinh_tru(){
	int cc = tplt();
	for (int i=1;i<=n;i++){
		memset(used,false, sizeof(used));
		memset(parent, 0, sizeof(parent));
		used[i] = true;
		int scc = tplt();
		if(scc > cc){
			cout << i<<" ";
		}
	}
}

int main(){
	int k;
	cin >>k;
	while(k--){
		cin >>n>>m;
		for (int i=1;i<=n;i++){
			ke[i].clear();
		}
		memset(used, false, sizeof(used));
		for (int i=0;i<m;i++){
			int x,y;
			cin >>x>>y;
			ke[x].push_back(y);
		}
		ok=0;
		for (int i=1;i<=n;i++){
			if(!used[i]){
				dfs(i);
			}
		}
		if(ok){
			cout <<"YES";
		}
		else {
			cout << "NO";
		}
		cout <<endl;
	}
}
