#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >>t;
	while(t--){
		int d;
		cin >>d;
		string s;
		cin >>s;
		map<char, int> mp;
		int maxFre =0;
		for(char x :s){
			mp[x]++;
			maxFre = max(maxFre, mp[x]);
		}
		int n = s.length();
		if(maxFre <= (n-1)/d +1){
			cout << 1;
		}
		else{
			cout << -1;
		}
		cout << endl;
	}
}
