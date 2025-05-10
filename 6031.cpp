#include <bits/stdc++.h>
using namespace std;

void slide_window(int a[], int n, int k){
	int start =0;
	vector<int> v;
	int maxVal = -1e9;
	int maxIdx = -1;
	for (int i=0;i<k;i++){
		if(a[i] >maxVal){
			maxVal = a[i];
			maxIdx = i;
		}
	}
	v.push_back(maxVal);
	for (int i=k;i<n;i++){
		if(maxIdx < i-k+1){
			maxVal = a[i-k+1];
			maxIdx = i-k+1;
			for(int j = i-k+2;j<=i;j++){
				if(a[j] > maxVal){
					maxVal = a[j];
					maxIdx = j;
				}
			}
		}
		else{
			if(a[i] > maxVal){
				maxVal = a[i];
				maxIdx = i;
			}
		}
		v.push_back(maxVal);
	}
	
	
	for (int i=0;i<v.size();i++){
		cout << v[i]<<" ";
	}
	
}

int main(){
	int t;
	cin >>t;
	while(t--){
		int n,k;
		 cin >>n>>k;
		int a[n];
		for (int i=0;i<n;i++){
			cin >>a[i];
		}
		slide_window(a,n,k);
		cout << endl;
	}
}
