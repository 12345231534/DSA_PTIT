#include <bits/stdc++.h>
using namespace std;

int n,k, oke, a[1001];

void ktao(){
	for (int i=1;i<=k;i++){
		a[i] = i;
	}
}
void sinh(){
	int i =k;
	while(i >=1 && a[i] == n-k+i){
		i--;
	}
	if(i==0){
		oke =0;
	}
	else{
		a[i]++;
		for (int j=i+1;j<=k;j++){
			a[j] = a[j-1] +1;
		}
	}
}

int main(){
	int t;
	cin >>t;
	while(t--){
		cin >>n>>k;
		int b[1000];
		for (int i=0;i<k;i++){
			cin >> b[i];
		}
		vector<vector<int>> v;
		ktao();
		oke =1;
		while(oke){
			vector<int> tmp;
			for (int i=1;i<=k;i++){
				tmp.push_back(a[i]);
			}
			v.push_back(tmp);
			sinh();
		}
		int pos =0;
		for (int i=0;i<v.size(); i++){
			int check =1;
			for (int j =0;j<k;j++){
				if(b[j] != v[i][j]){
					check =0;
				}
			}
			if(check) pos =i;
		}
		if(pos ==0){
			for(int j=0;j<k;j++){
				cout << v[v.size()-1][j]<<" ";
			}
		}
		else{
			for (int j=0;j<k;j++){
				cout << v[pos-1][j]<<" ";
			}
		}
		cout << endl;
	}
}

