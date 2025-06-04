#include <bits/stdc++.h>
using namespace std;

int bfs(int a, int b){
	queue <pair<int, int>> q;
	q.push({a,0});
	set<int> se;
	se.insert(a);
	while(!q.empty()){
		pair<int, int> x = q.front(); q.pop();
		if(x.first == b){
			return x.second;
		}
		// b1: x.first -1;
		if(x.first -1 > 0 && se.count(x.first -1) == 0){
			q.push({x.first -1, x.second +1});
			se.insert(x.first -1);
		}
		if(x.first < b && se.count(x.first *2) == 0){
			q.push({x.first *2, x.second + 1});
			se.insert(x.first*2);
		}
	}
	return -1;
}

int main(){
	int t;
	cin >>t;
	while(t--){
		int a, b;
		cin >>a>>b;
		cout << bfs(a,b)<<endl;
	}
}
