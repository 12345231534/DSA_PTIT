#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >>t;
	while(t--){
		int n;
		cin >>n;
		int a[n];
		set<int> s;
		for (int i=0;i<n;i++){
			cin >>a[i];
			s.insert(a[i]);	
		}
		vector<int> v(s.begin(),s.end());
		int m = v.back() - v[0] +1 - v.size();
		cout <<m<<endl;
		
	}
}
