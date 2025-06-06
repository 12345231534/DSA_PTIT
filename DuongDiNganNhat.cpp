#include <bits/stdc++.h>
using namespace std;

vector<int> ke[1005];
bool used[1005];
int parent[1005];

void bfs(int u){
	queue<int> q;
	q.push(u);
	used[u] = true;
	while(!q.empty()){
		int v = q.front(); q.pop();
		for (int x: ke[v]){
			if(!used[x]){
				parent[x] = v;
				used[x] = true;
				q.push(x);
			}
		}
	}
}
int main(){
	int t;
	cin >>t;
	while(t--){
		int n,m,s,t;
		cin >>n>>m>>s>>t;
		for (int i=1;i<=n;i++){
			ke[i].clear();
		}
		memset(used, false, sizeof(used));
		memset(parent, 0, sizeof(parent));
		for (int i=0;i<m;i++){
			int x,y;
			cin >>x>>y;
			ke[x].push_back(y);
			ke[y].push_back(x);
		}
		bfs(s);
		if(used[t]){
			vector<int> v;
			while(s!=t){
				v.push_back(t);
				t = parent[t];
			}
			v.push_back(s);
			reverse(v.begin(), v.end());
			for (int x : v){
				cout << x<<" ";
			}
		}
		else{
			cout <<-1;
		}
		cout <<endl;
	}
}
