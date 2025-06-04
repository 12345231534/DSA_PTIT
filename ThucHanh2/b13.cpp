#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >>t;
	while(t--){
		
		int n;
		cin >>n;
		string s;
		cin >>s;
		map<char, int> mp;
		for (int i=0;i<s.size();i++){
			mp[s[i]]++;
		}
		priority_queue<int> q;
		for (auto it : mp){
			q.push(it.second);
		}
		while(n>0){
			int x = q.top();
			q.pop();
			n--;
			x--;
			q.push(x);
		}
		long long sum=0;
		while(!q.empty()){
			sum += pow(q.top(), 2);
			q.pop();
		}
		cout << sum<<endl;
	}
}
