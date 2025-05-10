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
			cin >>a[i];
		}
		multiset<int> ms;
		for (int i=0;i<n;i++){
			ms.insert(a[i]);
		}
		for (int x : ms){
			cout << x<<" ";
		}
		cout << endl;
	}
}
