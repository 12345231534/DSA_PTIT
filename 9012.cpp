#include <bits/stdc++.h>
using namespace std;

vector<int> ke[1005];
bool used[1005];
int n, m;

void dfs(int u){
	used[u] = true;
	for (int x : ke[u]){
		if(!used[x]){
			dfs(x);
		}
	}
}

int tplt(){
	int cnt =0;
	for (int i=1;i<=n;i++){
		if(!used[i]){
			cnt++;
			dfs(i);
		}
	}
	return cnt;
}

void dinh_tru(){
	int cc = tplt();
	for (int i=1;i<=n;i++){
		memset(used, false, sizeof(used));
		used[i] = true;
		if(cc < tplt()){
			cout << i<<" ";
		}
	}
}
int main(){
	int t;
	cin >>t;
	while(t--){
		cin >>n>>m;
		for (int i=1;i<=n;i++){
			ke[i].clear();
		}
		memset(used, false, sizeof(used));
		for (int i=0;i<m;i++){
			int x, y;
			cin >>x>>y;
			ke[x].push_back(y);
			ke[y].push_back(x);
		}
		dinh_tru();
		cout << endl;
	}
}
