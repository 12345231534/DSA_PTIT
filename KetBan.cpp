#include <bits/stdc++.h>
using namespace std;

vector<int> ke[100005];
bool used[100005];
int a[100005];
int n,m;
int cnt;
void dfs(int u){
	used[u] = true;
	cnt++;
	for (int x : ke[u]){
		if(!used[x]){
			dfs(x);
		}
	}
}
void tplt(){
	int maxVal = -1e9;
	for (int i=1;i<=n;i++){
		if(!used[i]){
			cnt=0;
			dfs(i);
			maxVal = max(maxVal, cnt);
		}
	}
	cout << maxVal;
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
		tplt();
		cout <<endl;
	}
}

