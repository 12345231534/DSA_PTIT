#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >>t;
	while(t--){
		int n; cin >>n;
		int a[n];
		for (int i=0;i<n;i++){
			cin >>a[i];
		}
		int minval = 1e9;
		int res;
		for (int i=0;i<n-1;i++){
			for (int j=i+1;j<n;j++){
				int tmp = a[i] + a[j];
				if(abs(tmp) < minval){
					minval = abs(tmp);
					res = tmp;
				}
			}
		}
		cout <<res<<endl;
	}
}
