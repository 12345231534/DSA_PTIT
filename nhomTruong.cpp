#include <bits/stdc++.h>
using namespace std;

vector<int> ke[1005];
bool used[1005];
int cnt;
int n,m;
int nhomTruong;
int bac[1005];
void DFS(int u){
	if(bac[u] > bac[nhomTruong] ||  bac[u] == bac[nhomTruong] && u < nhomTruong){
		nhomTruong =u;
	}
	used[u] = true;
	for (int x : ke[u]){
		if(!used[x]){
			DFS(x);
		}
	}
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
			ke[y].push_back(x);
			bac[x]++;
			bac[y]++;
		}
		vector<int> res;
		for (int i=1;i<=n;i++){
			if(!used[i]){
				nhomTruong = i;
				DFS(i);
				res.push_back(nhomTruong);
			}
		}
		sort(res.begin(), res.end());
		for (int x : res){
			cout << x<<" ";
		}
	}
}

