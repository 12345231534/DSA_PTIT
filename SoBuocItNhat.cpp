#include <bits/stdc++.h>
using namespace std;
#define  fi first
#define  se second


int a[1005][1005];
int n, s1,s2,t1,t2;

int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0 ,1};

int bfs(){
	queue<pair<pair<int,int>, int>> q;
	q.push({{s1,s2},0});
	a[s1][s2] = 0;
	while(!q.empty()){
		auto it = q.front(); q.pop();
		int i = it.fi.fi, j = it.fi.se, d = it.se;
		if(i == t1 && j == t2){
			return d;
		}
		for (int k=0;k<8;k++){
			int ni = i + dx[k]; int  nj = j + dy[k];
			if(ni >= 1 && ni<=n && nj>=1 && nj<=n && a[i][j] ==1){
				q.push({{ni,nj},d+1});
				a[ni][nj] == 0;
			}
		}
	}
	return -1;
}
int main(){
	cin>> n >> s1>>s2>>t1>>t2;
	for (int i=1;i<=n;i++){
		for (int j=1;j<=n;j++){
			cin >>a[i][j];
		}
	}
	cout << bfs();
	
}
