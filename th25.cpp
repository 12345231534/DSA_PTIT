#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >>t;
	while(t--){
		int n,k;
		cin >>n>>k;
		int a[n];
		map<int, long long> mp;
		long long s = 0;
		for (int i=0;i<n;i++){
			cin >>a[i];
			mp[a[i]]++;
		}
		for (auto it : mp){
			if(it.first*2 ==k){
				s += it.second * (it.second-1);
			}
			else{
				s+= it.second * mp[k - it.first];
			}
		}
		s /=2;
		cout << s<<endl;
		
	}
}
