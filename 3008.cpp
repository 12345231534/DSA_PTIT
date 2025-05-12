#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> a, pair<int,int> b){
	return a.second < b.second;
}

int main(){
	int t;
	cin >>t;
	while(t--){
		int n;
		cin >>n;
		int s[n], f[n];
		pair<int, int> a[n];
		for(int i=0;i<n;i++){
			cin >>s[i];
		}
		for(int i=0;i<n;i++){
			cin >>f[i];
		}
		for(int i=0;i<n;i++){
			a[i].first = s[i];
			a[i].second = f[i];
		}
		sort(a, a+n, cmp);
		int cnt =1, t = a[0].second;
		for (int i=1;i<n;i++){
			if(a[i].first >= t){
				cnt++;
				t = a[i].second;
			}
		}
		cout << cnt<<endl;
	}
}
