#include <bits/stdc++.h>
using namespace std;

int n,k, oke, a[100];
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
	if(maxidx == k){
		return true;
	} 
	return false;
}

int main(){
	cin >>n>>k;
	oke =1;
	ktao();
	vector<string> v;
	while(oke){
		
		if(check()){
			string s ="";
			for (int i=1;i<=n;i++){
				if(a[i]==0){
					s += "B";
				}
				else s += "A";
			}
			v.push_back(s);
		}
		
		sinh();
	}
	sort(v.begin(), v.end());
	cout << v.size()<<endl;
	for (string x : v){
		cout << x<<endl;
	}
}
