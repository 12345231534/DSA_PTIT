#include <bits/stdc++.h>
using namespace std;

int n,k, a[100], x[100];
vector<vector<int>> v;
void Try(int i,int pos, int sum){
	for (int j=pos;j<=n;j++){
		x[i] = a[j];
		if (sum + a[j] ==k){
			vector<int> res;
			for (int l=1;l<=i;l++){
				res.push_back(x[l]);
			}
			v.push_back(res);
		}
		else if(sum + a[j] <k){
			Try(i+1,j, sum + a[j]);
		}
	}
}

int main(){
	int t;
	cin >>t;
	while(t--){
		cin >>n>>k;
		for (int i=1;i<=n;i++){
			cin >>a[i];
		}
		sort(a+1, a+n+1);
		v.clear();
		Try(1,1,0);
		if(!v.empty()){
			for(auto it:v){
				cout << "[";
				for(int i=0;i<it.size();i++){
					if(it[i] ==0) break;
					cout << it[i];
					
					if(i < it.size()-1){
						cout << " ";
					}
				}
				cout << "]";
			}
		}
		else{
			cout << "-1";
		}
		cout << endl;
	}
}
