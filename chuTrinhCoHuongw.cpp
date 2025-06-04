#include <bits/stdc++.h>
using namespace std;

vector<int> ke[1005];
bool used[1005];
int n, m;
int oke;
int color[1005];
void dfs(int u){
	if(oke) return;
	color[u] =1;
	for (int x : ke[u]){
		if(color[x] ==0){
			dfs(x);
		}
		else if(color[x] == 1){
			oke =1;
		}
	}
	color[u] =2;
}

void chuTrinh(){
	oke =0;
	for (int i=1;i<=n;i++){
		if(!used[i]){
			dfs(i);
		}
	}
	if(oke) cout <<"YES";
	else cout <<"NO";
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
		memset(color, 0, sizeof(color));
		for (int i=0;i<m;i++){
			int x, y;
			cin >>x>>y;
			ke[x].push_back(y);
		}
		chuTrinh();
		cout << endl;
	}
}

