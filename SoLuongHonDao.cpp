#include <bits/stdc++.h>
using namespace std;

vector<int> ke[1005];
bool used[1005];
int n,m;
int a[1005][1005];
int dx[8] = {-1,-1,-1,0,0,1,1,1};
int dy[8] = {-1,0,1,-1,1,-1,0,1};

void dfs(int i, int j){
	a[i][j] =0;
	for (int idx = 0;idx<8;idx++){
		int di = dx[idx] + i;
		int dj = dy[idx] + j;
		if(di>=1 && di<=n && dj>=1 && dj<=m && a[di][dj] == 1 ){
			dfs(di,dj);
		}
	}
}

int tplt(){
	int cnt =0;
	for (int i=1;i<=n;i++){
		for (int j = 1;j<=m;j++){
			if(a[i][j] == 1){
				dfs(i,j);
				cnt++;
			}
		}
	}
	return cnt;
}
int main(){
	int k;
	cin >>k;
	while(k--){
		cin >>n>>m;
		for (int i=1;i<=n;i++){
			for (int j=1;j<=m;j++){
				cin >>a[i][j];
			}
		}
		int cc = tplt();
		cout <<cc;
		cout <<endl;
	}
}
