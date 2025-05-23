#include <bits/stdc++.h>
using namespace std;

vector<int> ke[1005], dao[1005];
bool used[1005];
stack<int> st;
int n,m;
void dfs1(int u){
	used[u] = true;
	for (int x: ke[u]){
		if(!used[x]){
			dfs1(x);
		}
	}
	st.push(u);
}

void dfs2(int u){
	cout << u<<" ";
	used[u] = true;
	for (int x : dao[u]){
		if(!used[x]){
			dfs2(x);
		}
	}
}

void kosaraju(){
	memset(used,false, sizeof(used));
	for (int i=1;i<=n;i++){
		if(!used[i]){
			dfs1(i);
		}
	}
	memset(used,false, sizeof(used));
	int cnt =0;
	while(!st.empty()){
		int x = st.top(); st.pop();
		if(!used[x]){
			dfs2(x);
			cout <<endl;
			cnt++;
		}
	}
	cout << cnt<<endl;
	if(cnt==1) cout << "YES";
	else cout << "NO";
}

int main(){
	int t;
	cin >>t;
	while(t--){
		cin >>n>>m;
		for (int i=1;i<=n;i++){
			ke[i].clear();
			dao[i].clear();
		}
		for (int i=0;i<m;i++){
			int x, y;
			cin >>x>>y;
			ke[x].push_back(y);
			dao[y].push_back(x);
		}
		kosaraju();
		cout << endl;
	}
}
