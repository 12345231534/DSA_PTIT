#include <bits/stdc++.h>
using namespace std;

int n, oke, a[100];
void ktao(){
	for (int i=1;i<=n;i++){
		a[i] = 0;
	}
}
void sinh(){
	int i =n;
	while(i >=1 && a[i] == 1){
		a[i] =0;
		i--;
	}
	if(i==0){
		oke =0;
	}
	else{
		a[i] = 1;
	}
}
bool check(){
	if(a[1] == 1 || a[n] == 0) return false;
	for (int i=1;i<n;i++){
		if(a[i] == a[i+1] && a[i] == 0){
			return false;
		}
	}
	return true;
}
int main(){
	int t;
	cin >>t;
	while(t--){
		cin >>n;
		oke =1;
		vector<string> v;
		while(oke){
			if(check()){
				string s ="";
				for (int i=1;i<=n;i++){
					if(a[i] == 0) s += "H";
					else s += "A";
				}
				v.push_back(s);
				
			}
			sinh();
		}
		sort(v.begin(), v.end());
		for(string x : v){
			cout << x<<endl;
		}
	}
}
