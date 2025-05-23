#include <bits/stdc++.h>
using namespace std;

int n,m;
int a[501][501];
int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, -1, 1, 0};
bool used[501][501];
int minVal;

void dfs(int i, int j, int sum){
	if(i==n && j==m){
		minVal = min(minVal, sum + a[i][j]);
	
	}
	for(int idx =0;idx <4;idx++){
		int ni = i + dx[idx];
		int nj = j + dy[idx];
		if(ni>=1 && ni<=n && nj >=1 && nj<=m && !used[ni][nj]){
//			sum += a[ni][nj];
			used[ni][nj] = true;
			dfs(ni, nj, sum + a[i][j]);
//			sum -= a[ni][nj];
			used[ni][nj] = false;
		}
	}
}


int main(){
	int t;
	cin >>t;
	while(t--){
		cin >>n>>m;
		for (int i=1;i<=n;i++){
			for (int j=1;j<=m;j++){
				cin >>a[i][j];
			}
		}
		minVal  = 1e9;
		memset(used, false, sizeof(used));
		used[1][1] = true;
		dfs(1,1,0);
		cout << minVal<<endl;
	}
}
