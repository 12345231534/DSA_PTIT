#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >>t;
	while(t--){
		int n; cin >>n;
		queue<string> q;
		q.push("6");
		q.push("8");
		vector<string> v;
		while(1){
			string x = q.front();
			q.pop();
			if(x.size() > n){
				break;
			}
			else{
				v.push_back(x);
				q.push(x + "6");
				q.push(x + "8");
			}
		}
//		sort(v.begin(), v.end(), greater<string>());
		for (int i = v.size()-1 ;i>=0;i--){
			cout << v[i]<<" ";
		}
		cout <<endl;
	}
}
