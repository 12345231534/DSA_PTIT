#include <bits/stdc++.h>
using namespace std;

vector<int> ke[1005];
bool used[1005];
int cnt;
int bac[1005];
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
	int bacLe=0;
	for (int i=1;i<=n;i++){
		if(bac[i] % 2 != 0){
			bacLe++;
		}
	}
	if(bacLe == 0) return 2;
	if(bacLe ==2 ) return 1;
	return 0;
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
		memset(bac, 0, sizeof(bac));
		for (int i=0;i<m;i++){
			int x,y;
			cin >>x>>y;
			ke[x].push_back(y);
			ke[y].push_back(x);
			bac[x]++;
			bac[y]++;
		}
//		for(int i=1;i<=n;i++){
//			cout <<i <<"bac "<<bac[i]<<endl;
//		}
		if(tplt()){
			cout << checkBac();
		}
		else{
			cout << 0;
		}
		cout <<endl;
	}
}
