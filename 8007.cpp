#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >>t;
	while(t--){
		long long s;
		cin >>s;
		queue<long long> q;
		int cnt=0;
		if(s == 1){
			cout << 1;
			continue;
		}
		q.push(1);
		while(1){
			long long x = q.front();
			q.pop();
			if(x > s){
				break;
			}
			else{
				cnt++;
				q.push(x*10);
				q.push(x*10+1);
			}
		}
		cout << cnt<< endl;
	}
}
