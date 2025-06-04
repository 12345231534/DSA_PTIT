#include <bits/stdc++.h>
using namespace std;

vector<int> ke[1005];
bool used[1005];

void BFS(int u){
	queue<int> q;
	q.push(u);
	used[u] = true;
	while(!q.empty()){
		int top = q.front(); q.pop();
		cout << top<<" ";
		for (int x : ke[top]){
			if(!used[x]){
				q.push(x);
				used[x] = true;
			}
		}
	}
}

int main(){
	int t;
	cin >>t;
	while(t--){
		int n,m,u;
		cin >>n>>m>>u;
		memset(used, false, sizeof(used));
		for (int i=1;i<=n;i++){
			ke[i].clear();
		}
		for(int i=0;i<m;i++){
			int x,y;
			cin >>x>>y;
			ke[x].push_back(y);
			ke[y].push_back(x);
		}
		BFS(u);
		cout << endl;
	}
}



