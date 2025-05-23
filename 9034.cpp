#include <bits/stdc++.h>
using namespace std;

char a[105][105];
int dx[8] = {-1,-1,-1,0,0,1,1,1};
int dy[8] = {-1,0,1,-1,1,-1,0,1};
bool used[105][105];
int n,m;
void dfs(int i, int j){
	used[i][j] = true;
	for (int idx = 0;idx<8;idx++){
		int ni = i+ dx[idx];
		int nj = j + dy[idx];
		if(ni>=1 && ni<=n && nj>=1 && nj<=m && !used[ni][nj] && a[ni][nj] == 'W' ){
			dfs(ni, nj);
		}
	}
}

int main(){
	cin >>n>>m;
	memset(used, false, sizeof(used));
	for (int i=1;i<=n;i++){
		for (int j =1;j<=m;j++){
			cin >>a[i][j];
		}
	}
	int cnt =0;
	for (int i=1;i<= n;i++){
		for (int j=1;j<= m;j++){
			if(!used[i][j] && a[i][j] == 'W'){
				cnt++;
				dfs(i,j);
			}
		}
	}
	cout << cnt<< endl;
}
