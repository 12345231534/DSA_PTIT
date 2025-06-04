#include <bits/stdc++.h>
using namespace std;

vector<int> ke[1005];
bool used[1005];
int n, m;

void dfs(int u){
	used[u] = true;
	for (int x : ke[u]){
		if(!used[x]){
			dfs(x);
		}
	}
}


int tplt(){
	int cnt =0;
	for (int i=1;i<=n;i++){
		if(!used[i]){
			cnt++;
			dfs(i);
		}
	}
	return cnt;
}

void dinh_tru(){
	int cc = tplt();
	int max =1;
	int pos;
	for (int i=1;i<=n;i++){
		memset(used, false, sizeof(used));
		used[i] = true;
		int tmp = tplt();
		if(cc < tmp){
			if(tmp >max){
				max = tmp;
				pos = i;
			}
		}
	}
	if(max==1){
		cout <<0<<endl;
	}
	else{
		cout << pos<<endl;
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
		memset(used, false, sizeof(used));
		for (int i=0;i<m;i++){
			int x, y;
			cin >>x>>y;
			ke[x].push_back(y);
			ke[y].push_back(x);
		}
		dinh_tru();
	}
}
