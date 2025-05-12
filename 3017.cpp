#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >>t;
	while(t--){
		int k;
		string s;
		cin >>k;
		cin >>s;
		map<char, int> mp;
		for (char x:s){
			mp[x]++;
		}
		priority_queue<int> pq;
		for (auto x : mp){
			pq.push(x.second);
		}
		while(k>=1){
			if(!pq.empty()){
				int i = pq.top();
				i--;
				pq.pop();
				pq.push(i);
			}
			k--;
		}
		long long res=0;
		while(!pq.empty()){
			int i = pq.top();
			res += pow(i,2);
			pq.pop();
		}
		cout << res<<endl;
		
	}
}
