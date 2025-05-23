#include <bits/stdc++.h>
using namespace std;

vector<int> ke[1005];
bool used[1005];
int n;
void dfs(int u){
	used[u] = true;
	for (int x : ke[u]){
		if(!used[x]){
			dfs(x);
		}
	}
}
int tplt (){
	int cnt =0;
	for (int i=1;i<=n;i++){
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
		cin >>n;
		for (int i=1;i<=n;i++){
			ke[i].clear();
		}
		memset(used, false, sizeof(used));
		for (int i=0;i<n-1;i++){
			int x, y;
			cin >>x>>y;
			ke[x].push_back(y);
			ke[y].push_back(x);
		}
		int cc = tplt();
		if(cc ==1){
			cout << "YES\n";
		}
		else cout << "NO\n";
	}
}
