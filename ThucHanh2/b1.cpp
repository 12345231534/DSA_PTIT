#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >>n;
	int a[n];
	int cnt[1000];
	for (int i=0;i<n;i++){
		cin >>a[i];
		cnt[a[i]]++;
	}
	for (int i=0;i<n;i++){
		if(cnt[a[i]] >=1){
			cout << a[i]<<" ";
		}
		cnt[a[i]] =0;
	}
}
