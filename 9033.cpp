#include <bits/stdc++.h>
using namespace std;

vector<int> ke[100005];
bool used[100005];
int n, m;
vector<int> tplt;
void dfs(int u){
	used[u] = true;
	tplt.push_back(u);
	for (int x : ke[u]){
		if(!used[x]){
			dfs(x);
		}
	}
}
bool social(){
	for (int i=1;i<=n;i++){
		if(!used[i]){
			tplt.clear();
			dfs(i);
			int soluong = tplt.size();
			
			
			for (int x: tplt){
				if(ke[x].size() != soluong-1){
					return false;
				}
			}
			for (int j=0;j<soluong;j++){
				for (int k = j+1;k<soluong;k++){
					int u = tplt[j];
					int v = tplt[k];
					bool check =0;
					for (int x : ke[u]){
						if(x==v){
							check =1;
							break;
						}
					}
					if(check ==0) return false;
				}
			}
		}
	}
	return true;
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
		if(social()){
			cout << "YES"<<endl;
		}
		else{
			cout <<"NO"<<endl;
		}
	}
}


