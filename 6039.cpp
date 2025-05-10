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
		int oke =0;
		int idx;
		for (int i=0;i<n-1;i++){
			
			for (int j=i+1;j<n;j++){
				if(a[i] == a[j]){
					cout << a[i]<<endl;
					oke = 1;
					break;
				}
			}
			if(oke) break;
		}
		if (oke == 0){
			cout << "NO"<<endl;
		}
	}
}
