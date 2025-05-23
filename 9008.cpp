#include <bits/stdc++.h>
using namespace std;

vector<int> ke[1005];
bool used[1005];
int n,m;
void bfs(int u){
	queue <int> q;
	q.push(u);
	used[u] = true;
	while(!q.empty()){
		int x = q.front(); q.pop();
		for(int y : ke[x]){
			if(!used[y]){
			
				used[y] = true;
				q.push(y);
			}
		}
	}
}
int tplt(){
	int cnt =0;
	for (int i=1;i<=n;i++){
		if(!used[i]){
			cnt++;
			bfs(i);
		}
	}
	return cnt;
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
		for (int i=0;i<m;i++){
			int x, y;
			cin >>x>>y;
			ke[x].push_back(y);
			ke[y].push_back(x);
		}
		int cc = tplt();
		cout << cc<<endl;
		
	}
}
