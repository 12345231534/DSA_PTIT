#include <bits/stdc++.h>
using namespace std;


int n, oke, a[100];
void ktao(){
	for (int i=1;i<=n;i++){
		a[i] =i;
	}
}

void sinh(){
	int i =n-1;
	while(i>=1 && a[i] > a[i+1]){
		i--;
	}
	if(i==0){
		oke =0;
	}
	else{
		int j =n;
		while(a[j] < a[i]) j--;
		swap(a[i], a[j]);
		sort(a+i+1, a+n+1);
	}
}

int main(){
	int t;
	cin >>t;
	while (t--){
		cin >>n;
		int x[100];
		for (int i=0;i<n;i++){
			cin >> x[i];
		}
		oke =1;
		ktao();
		vector<vector<int>> v;
		while(oke){
			vector<int> tmp;
			for (int i=1;i<=n;i++){
				tmp.push_back(a[i]);
			}
			v.push_back(tmp);
			sinh();
		}
		for (int i=0;i<=v.size();i++){
			int check =1;
			for(int j =0;j<n;j++){
				if(x[j] != v[i][j]){
					check = 0;
				}
			}
			if(check){
				cout << i+1<<endl;
				break;
			}
		}
		
	}
}
