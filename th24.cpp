#include<bits/stdc++.h>
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
		sort(a, a+n);
		int minVal =1e9;
		for (int i=0;i<n-1;i++){
			minVal = min(minVal, a[i+1]-a[i]);
		}
		cout << minVal<<endl;
	}
}
