#include <bits/stdc++.h>
using namespace std;

vector<int> ke[1005];
bool used[1005];
int cnt;
int bacRa[1005], bacVao[1005];
int n,m;
void dfs(int u){
	used[u] = true;
	cnt++;
	for (int x : ke[u]){
		if(!used[x]){
			dfs(x);
		}
	}
}

int checkBac(){
	for(int i=1;i<=n;i++){
		if(bacRa[i] != bacVao[i]){
			return 0;
		}
	}
	return 1;
}
bool tplt(){
	cnt =0;
	dfs(1);
	if(cnt !=n){
		return false;
	}
	return true;
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
		memset(bacRa, 0, sizeof(bacRa));
		memset(bacVao, 0, sizeof(bacVao));
		for (int i=0;i<m;i++){
			int x,y;
			cin >>x>>y;
			ke[x].push_back(y);
			ke[y].push_back(x);
			bacRa[x]++;
			bacVao[y]++;
		}
		if(tplt()){
			cout << checkBac();
		}
		else{
			cout << 0;
		}
		cout <<endl;
	}
}
