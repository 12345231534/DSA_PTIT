#include <bits/stdc++.h>
using namespace std;

int n, oke, a[100];
void ktao(){
	for (int i=1;i<=n;i++){
		a[i] =0;
	}
}
void sinh(){
	int  i =n;
	while(i>=1 && a[i] == 1){
		a[i] =0;
		i--;
	}
	if(i==0){
		oke =0;
	}
	else {
		a[i]++;
	}
}

bool check(){
	if(a[1] == 1 || a[n] == 0) return false;
	for (int i=1;i<n;i++){
		if(a[i] == a[i+1] && a[i] == 0) {
			return false;
		}
	}
	int maxidx =1;
	int res =1;
	for (int i=1;i<n;i++){
		if(a[i] == a[i+1] && a[i] ==1){
			res ++;
			maxidx = max(res, maxidx);
		}
		else{
			res = 1;
		}
	}
	if(maxidx >3){
		return false;
	} 
	return true;
}

int main(){
	cin >>n;
	oke =1;
	ktao();
	vector<string> v;
	while(oke){
		
		if(check()){
			string s ="";
			for (int i=1;i<=n;i++){
				if(a[i]==0){
					s += "8";
				}
				else s += "6";
			}
			v.push_back(s);
		}
		
		sinh();
	}
	sort(v.begin(), v.end());
	for (string x : v){
		cout << x<<endl;
	}
}
