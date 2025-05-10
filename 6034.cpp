#include <bits/stdc++.h>
using namespace std;


int main(){
	int t;
	cin >>t;
	while(t--){
		int n, k; 
		cin >>n>>k;
		int a[n];
		map<int, long long> mp;
		for (int i=0;i<n;i++){
			cin >>a[i];
			mp[a[i]]++;
		}
		
		long long s =0;
		for (auto x : mp){
			if(x.first * 2 ==k){
				s += x.second * (x.second -1);
			}
			else{
				s += x.second * mp[k - x.first];
			}
		}
		cout << s/2<<endl;
		
		
	}
}
