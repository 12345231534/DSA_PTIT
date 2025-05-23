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
		vector<string> res;
		while(1){
			string x = q.front();
			q.pop();
			if(x.size()>n){
				break;
			}
			else{
				res.push_back(x);
				q.push(x+"6");
				q.push(x+"8");
			}
		}
		cout << res.size()<<endl;
		
		for(int i = res.size()-1; i>=0;i--){
			cout << res[i]<<" ";
		}
		cout << endl;
	}
}
