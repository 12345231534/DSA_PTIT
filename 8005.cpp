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
		int cnt =0;
		while(true){
			string x = q.front(); q.pop();
			if(cnt < n){
				cout << x<<" ";
				q.push(x + "0");
				q.push(x + "1");
				cnt++;
			}
			else {
				break;
			}
		}
		cout << endl;
	}
}
