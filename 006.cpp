#include <bits/stdc++.h>
using namespace std;
int cnt[1000000];
int main(){
	int n;
	cin >>n;
	int a[n];
	for (int i=0;i<n;i++){
		cin >>a[i];
		cnt[a[i]]++;
	}
	for (int i=0;i<n;i++){
		if(cnt[a[i]]>=1){
			cout << a[i]<<" ";
			cnt[a[i]]=0;
		}
	}
}
