#include <bits/stdc++.h>
using namespace std;

int n, a[100][100], x[100];
int visited[100];
int minVal = 1e9;
int amin = 1e9;
void Try(int i, int dis){
	for (int j=1;j<=n;j++){
		if(visited[j] ==0){
			x[i]=j;
			dis += a[x[i-1]][x[i]];
			visited[j] = 1;
			if(i==n){
				minVal= min(minVal, dis + a[x[n]][1]);
			}
			// danh gia can 
			else if(dis + (n-i+1) * amin < minVal){
				Try(i+1, dis);
			}
			visited[j] = 0;
			dis -= a[x[i-1]][x[i]];
		}
	}
}

int main(){
	cin >>n;
	for (int i=1;i<=n;i++){
		for (int j=1;j<=n;j++){
			cin >> a[i][j];
			if(a[i][j]){
				amin = min(amin, a[i][j]);
			}
		}
	}
	x[1] = 1;
	visited[1] = 1;
	Try(2,0);
	cout << minVal;
}
