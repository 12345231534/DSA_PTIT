#include <bits/stdc++.h>
using namespace std;

vector<int> ke[1005];
bool used[1005];
int cnt;
int n,m;
int dem[1005];
int oke;
void dfs(int u, int cnt){
	if(cnt ==n){
		oke =1;
		return;
	}
	for (int x : ke[u]){
		if(!used[x]){
			used[x] = true;
			dfs(x, cnt+1);
			used[x] = false;
		}
	}
}
int check(){
	oke =0;
	for (int i=1;i<=n;i++){
		memset(used, false, sizeof(used));
		used[i] = true;
		dfs(i,1);
		if(oke){
			return 1;
		}
	}
	return 0;
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
		memset(dem, 0, sizeof(dem));
		for (int i=0;i<m;i++){
			int x,y;
			cin >>x>>y;
			ke[x].push_back(y);
			ke[y].push_back(x);
		}
		cout << check()<<endl;
	}
}
