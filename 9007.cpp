#include <bits/stdc++.h>
using namespace std;

vector<int> ke[1005];
bool used[1005];
int n,m,k,l;
int parent[1005];
void bfs(int u){
	queue <int> q;
	q.push(u);
	used[u] = true;
	while(!q.empty()){
		int x = q.front(); q.pop();
		for(int y : ke[x]){
			if(!used[y]){
				parent[y] = x;
				used[y] = true;
				q.push(y);
			}
		}
	}
}

int main(){
	int t;
	cin >>t;
	while(t--){
		cin >>n>>m>>k>>l;
		for (int i=1;i<=n;i++){
			ke[i].clear();
		}
		memset(used, false, sizeof(used));
		memset(parent, 0, sizeof(parent));
		for (int i=0;i<m;i++){
			int x, y;
			cin >>x>>y;
			ke[x].push_back(y);
			ke[y].push_back(x);
		}
		bfs(k);
		if(used[l]){
			vector<int>res;
			while(k !=l){
				res.push_back(l);
				l = parent[l];
			}
			res.push_back(l);
			reverse(res.begin(), res.end());
			for (int x:res){
				cout << x<<" ";
			}
		}
		else{
			cout << -1;
		}
		cout <<endl;
	}
}
