#include <bits/stdc++.h>
using namespace std;

vector<int> ke[1005];
bool used[1005];
vector<pair<int,int>> dscanh;

int n,m,k;
void bfs(int u){
	used[u] = true;
	queue<int> q;
	q.push(u);
	while(!q.empty()){
		int top = q.front(); q.pop();
		for(int x:ke[top]){
			if(!used[x]){
				dscanh.push_back({top,x});
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
		cin >>n>>m>>k;
		for (int i=1;i<=n;i++){
			ke[i].clear();
		}
		memset(used, false, sizeof(used));
		dscanh.clear();
		for(int i=0;i<m;i++){
			int x,y;
			cin >>x>>y;
			ke[x].push_back(y);
			ke[y].push_back(x);
		}
		for(int i=1;i<=n;i++){
			sort(ke[i].begin(), ke[i].end());
		}
		bfs(k);
		int oke =1;
		// di qua tat ca cac canh
		for (int i=1;i<=n;i++){
			if(used[i] == false){
				oke =0;
			}
		}
		if(oke && dscanh.size() == n-1){
			for (auto it : dscanh){
				cout << it.first<<" "<<it.second<<endl;
			}
		}
		else{
			cout << -1<<endl;
		}
	}
}
