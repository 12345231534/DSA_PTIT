#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	cin >>n>>m;
	char a[n][m];
	for (int i=0;i<n;i++){
		for (int j=0;j<m;j++){
			cin >>a[n][m];
		}
	}
	int dem=0;
	for (int i=0;i<n;i++){
		for (int j=0;j<m;j++){
			cout << a[i][j];
		}
		cout << endl;
	}
	cout << dem;
}
