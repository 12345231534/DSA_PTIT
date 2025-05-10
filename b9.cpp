#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >>t;
	while(t--){
		int n;
		cin >>n;
		set<int> a;
		bool ch =0;
		for (int i=0;i<n;i++){
			string s; cin >>s;
			for (auto x :s){
				int m = x- '0';
				if(m%2==0){
					ch =1;
					a.insert(m);
				}
			}
		}
		if(ch==0) cout << -1;
		else {
			for(auto x: a) {
				cout << x<<" ";
			}
		}
		cout << endl;
		
	}
}
