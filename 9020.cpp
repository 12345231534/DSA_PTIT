#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >>n;
	cin.ignore();
	vector<int> ke[1005];
	for (int t=0;t<n;t++){
		string s;
		getline(cin, s);
		int num =0;
		for(int i=0;i<s.size();i++){
			if(isdigit(s[i])){
				num = num*10 + (s[i] - '0');
			}
			if(!isdigit(s[i]) || i == s.size()-1 ){
				ke[t+1].push_back(num);
				num =0;
			}
		}
	}
	int a[n+1][n+1];
	for (int i=1;i<=n;i++){
		for (int j=1;j<=n;j++){
			a[i][j] = 0;
		}
	}
	for (int i=1;i<=n;i++){
		for(int x : ke[i]){
			a[i][x] = 1;
		}
	}
	for (int i=1;i<=n;i++){
		for (int j=1;j<=n;j++){
			cout << a[i][j]<<" ";
		}
		cout << endl;
	}
}
