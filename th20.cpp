#include<bits/stdc++.h>
using namespace std;
int cnt[1000000] = {0};
int main(){
	int t;
	cin >>t;
	while(t--){
		int n,k;
		cin >>n>>k;
		int a[n];
		int cnt =0;
		for (int i=0;i<n;i++){
			cin >>a[i];
			if(a[i]==k){
				cnt++;
			}
		}
		if(cnt != 0){
			cout << cnt;
		}
		else{
			cout << "-1";
		}
		cout << endl;
	}
}
