#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >>t;
	while(t--){
		int n;
		cin >>n;
		int a[n];
		map<int, int> mp;
		for (int i=0;i<n;i++){
			cin >>a[i];
			mp[a[i]]++;
		}
		int max = -1e9;
		int tmp;
		for (int i=0;i<n;i++){
			if(mp[a[i]] > max){
				max = mp[a[i]];
				tmp = a[i];
			}
		}
		if(max > n/2){
			cout << tmp;
		}
		else{
			cout << "NO";
		}
		cout <<endl;
	}
}
