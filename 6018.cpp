#include <bits/stdc++.h>
using namespace std;


int main(){
	int t;
	cin >>t;
	while(t--){
		int n; cin >>n;
		int a[n];
		set<int> se;
		for (int i=0;i<n;i++){
			cin >>a[i];
			se.insert(a[i]);
		}
		int x = *se.rbegin() - *se.begin() +1 - se.size();
		cout << x<<endl;
	}
}
