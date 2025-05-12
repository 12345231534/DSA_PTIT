#include <bits/stdc++.h>
using namespace std;

int n,k, oke, a[21];
void ktao(){
	for (int i=1;i<=k;i++){
		a[i] = i;
	}
}
void sinh(){
	int i =k;
	while(i>=1 && a[i] == n-k+i){
		i--;
	}
	if(i==0) oke = 0;
	else{
		a[i]++;
		for (int j=i+1; j<=k;j++){
			a[j] = a[j-1] +1;
		}
	}
}

int main(){
	int t;
	cin >>t;
	while(t--){
		cin >>n>>k;
		oke =1;
		ktao();
		vector<vector<int>> v;
		while(oke){
			vector<int> res;
			for (int i=1;i<=k;i++){
				res.push_back(a[i]);
			}
			v.push_back(res);
			sinh();
		}
		for(int i=v.size()-1 ;i>=0;i--){
			for (int j=0;j<v[i].size();j++){
				cout << v[i][j]<<" ";
			}
			cout << endl;
		}
	}
}
