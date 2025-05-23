#include <bits/stdc++.h>
using namespace std;

int a[1000][1000];
bool used[1005][1005];
int n, m;

int dx[8] = {-1,-1,-1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
void dfs(int i, int j){
	used[i][j] = true;
	for (int dir=0;dir<8;dir++){
		int ni = i + dx[dir];
		int nj = j + dy[dir];
		if(ni>=1 && ni<=n && nj >=1 && nj<=m && !used[ni][nj] && a[ni][nj] ==1){
			dfs(ni, nj);
		}
	}
}
int tplt(){
	int cnt =0;
	memset(used, false, sizeof(used));
	for(int i=1;i<=n;i++){
		for (int j =1;j<=m;j++){
			if(!used[i][j] && a[i][j] ==1){
				dfs(i,j);
				cnt++;
			}
		}
	}
	return cnt;
}

int main(){
	int t;
	cin >>t;
	while(t--){
		cin >> n>>m;
		
		for (int i=1;i<=n;i++){
			for (int j=1;j<=m;j++){
				cin >>a[i][j];
			}
		}
		int cc = tplt();
		cout << cc<<endl;
	}
}
