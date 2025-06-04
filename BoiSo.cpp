#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >>t;
	while(t--){
		int n;
		cin >>n;
		queue <long long> q;
		q.push(8);
		while(true){
			long long top = q.front(); q.pop();
			if(top%n ==0 && top >=n){
				cout << top<<endl;
				break;
			}
			else{
				q.push(top*10);
				q.push(top*10 +8);
			}
		}
		
	}
}
