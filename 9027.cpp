#include<bits/stdc++.h>
using namespace std;

vector<int> ke[1005];
bool used[1005];
int cnt;
int tplt[1005];
void dfs(int u){
	used[u] =true;
	tplt[u] = cnt;
	for (int x : ke[u]){
		if(!used[x]){
			dfs(x);
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
		memset(tplt, 0, sizeof(tplt));
		cnt=0;
		for (int i=0;i<m;i++){
			int x,y;
			cin >>x>>y;
			ke[x].push_back(y);
			ke[y].push_back(x);
		}
		for(int i=1;i<=n;i++){
			if(!used[i]){
				cnt++;
				dfs(i);
			}
		}
		int q;
		cin >>q;
		while(q--){
			int x,y;
			cin >>x>>y;
			if(tplt[x] == tplt[y]){
				cout << "YES"<<endl;
			}
			else cout <<"NO"<<endl;
		}
	}
}
