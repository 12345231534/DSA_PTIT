#include<bits/stdc++.h>
using namespace std;

vector<int> ke[1005];
int color[1005];

int oke;
void dfs(int u){
	color[u] = 1;
	for(int x: ke[u]){
		if(color[x]==0){
			dfs(x);
		}
		else if(color[x] == 1){
			oke =1;
		}
	}
	color[u] =2;
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
		memset(color, 0, sizeof(color));
		for (int i=0;i<m;i++){
			int x, y;
			cin >>x>>y;
			ke[x].push_back(y);
		}
		oke =0;
		for(int i=1;i<=n;i++){
			if(color[i] ==0){
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
