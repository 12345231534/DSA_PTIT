#include <bits/stdc++.h>
using namespace std;

vector<int> ke[1005];
bool visited[1005];

void DFS(int u){
	cout << u<<" ";
	visited[u] = true;
	for (int x : ke[u]){
		if(!visited[x]){
			DFS(x);
		}
	}
}

int main(){
	int t;
	cin >>t;
	while(t--){
		int n,m,k;
		cin >>n>>m>>k;
		for(int i=1;i<=n;i++){
			ke[i].clear();
		}
		memset(visited, false, sizeof(visited));
		for(int i=0;i<m;i++){
			int x,y;
			cin >>x>>y;
			ke[x].push_back(y);
			ke[y].push_back(x);
		}
		DFS(k);
		cout<< endl;
	}
}
