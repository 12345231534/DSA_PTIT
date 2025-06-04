#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >>t;
	while(t--){
		int n;
		cin >>n;
		queue<string> q;
		q.push("6");
		q.push("8");
		vector<string> v;
		while(true){
			string x = q.front();q.pop();
			if(x.size() <= n){
				v.push_back(x);
				q.push(x+"6");
				q.push(x+"8");
			}
			else{
				break;
			}
		}
		cout << v.size()<<endl;
		for (string x:v){
			cout <<x<<" ";
		}
		cout <<endl;
	}
}
