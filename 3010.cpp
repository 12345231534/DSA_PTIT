#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >>t;
	while(t--){
		int n;
		cin >>n;
		int a[n];
		
		priority_queue<int, vector<int>, greater<int>> pq;
		for (int i=0;i<n;i++){
			cin >>a[i];
			pq.push(a[i]);
		}
		long long res =0;
		while(pq.size() >=2){
			int x = pq.top(); pq.pop();
			int y = pq.top(); pq.pop();
			int k = x+y;
			res += k;
			pq.push(k);
		}
		cout << res<<endl;
	}
}
