#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >>t;
	while(t--){
		int n;
		cin >>n;
		int a[n];
		for (int i=0;i<n;i++){
			cin >> a[i];
		}
		set<int> se;
		for (int i =0;i<n;i++){
			int tmp = a[i];
			while(tmp ){
				int s = tmp % 10;
				se.insert(s);
				tmp /=10;
			}
		}
		for (int x : se){
			cout << x<<" ";
		}
		cout << endl;
	}
}
