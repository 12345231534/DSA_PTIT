#include <bits/stdc++.h>
using namespace std;

int n,m;
int parent[1005];
int sz[1005];
void ktao(){
	cin >>n>>m;
	for (int i=1;i<=n;i++){
		parent[i] = i;
		sz[i] = 1;
	}
	
}
int Find(int u){
	if(u == parent[u]){
		return u;
	}
	
	int tmp = Find(parent[u]);
	parent[u] = tmp;
	return tmp;	
	
}
bool Union(int u, int v){
	u = Find(u);
	v = Find(v);
	if(u==v){
		return false;
	}
	if(sz[u] < sz[v]){
		swap(u,v);
	}
	sz[u] += sz[v];
	parent[v] = u;
	return true;
}
int main(){
	int t;
	cin >>t;
	while(t--){
		memset(parent, 0, sizeof(parent));
		memset(sz,0,sizeof(sz));
		ktao();
		for (int i=0;i<m;i++){
			int x,y;
			cin >>x>>y;
			Union(x,y);
		}
		
		int cnt =0;
		for (int i=1;i<=n;i++){
			if(i == parent[i]){
				cnt++;
			}
		}
		cout << cnt<<endl;
	}
}
