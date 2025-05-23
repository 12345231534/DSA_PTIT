#include <bits/stdc++.h>
using namespace std;

vector<int> ke[1005];
bool visited[1005];
void DFS(int u){
	cout << u<<" ";
	visited[u] = true;
	// duyet danh sach ke cua dinh u
	for(int x : ke[u]){
		if(!visited[x]){
			DFS(x);
		}
	}
}

int main(){
	int t;
	cin >>t;
	while(t--){
		int n,m;
		cin >>n>>m;
		for (int i = 1; i <= n; i++) {
		    ke[i].clear();
		}
		for (int i=0;i<m;i++){
			int x,y;
			cin >>x>>y;
			ke[x].push_back(y);
			ke[y].push_back(x);
		}
		for (int i=1;i<=n;i++){
			sort(ke[i].begin(),ke[i].end());
			cout << i<<": ";
			for (int x:ke[i]){
				cout << x<< " ";
			}
			cout << endl;
		}
	}
}
