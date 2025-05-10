#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >>t;
	while(t--){
		int n; cin >>n;
		long long a[n];
		for (int i=0;i<n;i++){
			cin >>a[i];
		}
		int oke = 0;
		int val;
		for (int i=0;i<n;i++){
			if(a[i+1] < a[i]){
				oke =1;
				val = i+1;
				break;
			}
		}
		if(oke){
			cout << val<<endl;
		}
		else{
			cout << "0";
		}
	}
}
