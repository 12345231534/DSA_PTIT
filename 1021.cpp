#include <bits/stdc++.h>
using namespace std;

int n,k, oke , a[100];

void sinh(){
	int i =k;
	while(i>=0 && a[i] == n-k+i){
		i--;
	}
	if(i==0){
		oke =0;
	}
	else{
		a[i]++;
		for (int j=i+1;j<=k;j++){
			a[j] = a[j-1]+1;
		}
	}
}
int main(){
	int t;
	cin >>t;
	while(t--){
		cin >>n>>k;
		map<int, int> mp;
		for (int i=1;i<=k;i++){
			cin >>a[i];
			mp[a[i]]++;
		}
		oke =1;
		int b[100];
		sinh();
		if(oke){
			int cnt =0;
			for (int i=1;i<=k;i++){
				mp[a[i]]++;
			}
			for (const auto &pair : mp){
				if(pair.second ==2){
					cnt++;
				}
			}
			cout << k-cnt<<endl;
		}
		else{
			cout << k<<endl;
		}
	}
}
