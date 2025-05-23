#include <bits/stdc++.h>
using namespace std;

vector<int> ke[1005];
bool visited[1005];
int cnt;
int n,m;
void DFS(int u){
	cnt++;
	visited[u] = true;
	for (int x : ke[u]){
		if(!visited[x]){
			DFS(x);
		}
	}
}

int check(){
	for (int i=1;i<=n;i++){
		cnt=0;
		memset(visited, false, sizeof(visited));
		DFS(i);
		if(cnt != n) return 0;
	}
	return 1;
}
int main(){
	int t;
	cin >>t;
	while(t--){
		cin >>n>>m;
		for (int i=1;i<=n;i++){
			ke[i].clear();
		}
		for (int i=0;i<m;i++){
			int x,y;
			cin >>x>>y;
			ke[x].push_back(y);
		}
		if(check()) {
			cout << "YES";
		}
		else cout << "NO";
		cout <<endl;
	}
}

