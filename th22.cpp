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
		int min1 = 1e9, min2 = 1e9;
		
		for (int i=0;i<n;i++){
			if(a[i] < min1){
				min2 = min1;
				min1 = a[i];
			}
			else if(a[i] < min2){
				min2 = a[i];
			}
		}
		if(min1 != min2){
			cout << min1<<" "<<min2<<endl;
		}
		else{
			cout << "-1"<<endl;
		}
	}
}
