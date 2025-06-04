#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >>t;
	while(t--){
		int n;
		cin >>n;
		queue<string> q;
		q.push("1");
		vector<string> v;
		while(true){
			string x = q.front(); q.pop();
			if(n>0){
				n--;
				v.push_back(x);
				q.push(x+"0");
				q.push(x + "1");
			}
			else {
				break;
			}
		}
		for (string x : v){
			cout << x<<" ";
		}
		cout <<endl;
	}
}
