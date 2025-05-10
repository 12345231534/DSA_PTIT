#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >>t;
	while(t--){
		int n;
		cin >>n;
		int a[n];
		for (int i=0;i<n;i++){
			cin >>a[i];
			
		}
		map <int, int> mp;
		for (int i=0;i<n;i++){
			int x = a[i];
			while(x>0){
				int s = x%10;
				mp[s]++;
				x/=10;
			}
		}
		vector<pair<int, int>> v(mp.begin(),mp.end());
		int check =0;
		sort(v.begin(),v.end());
		for (int i=0;i<v.size();i++){
			if(v[i].first %2 == 0){
				check =1;
			}
				
		}
		if(check==0){
			cout << "-1";
		}
		else{
			for (int i=0;i<v.size();i++){
			if(v[i].first %2 == 0 && v[i].second ==1){
				cout << v[i].first<<" ";	
			}
		}
		cout << endl;
	}
}
}
