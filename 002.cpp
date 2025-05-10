#include <bits/stdc++.h>
using namespace std;

int n, a[100],b[100], k, oke;
void ktao(){
	for (int i=1;i<=n;i++){
		a[i] = 0;
	}
}
void sinh(){
	int i =n;
	while (i>=1 && a[i] ==1){
		a[i] =0;
		i--;
	}
	if(i==0){
		oke =0;
	}
	else{
		a[i] =1;
	}
}
int check(){
	int sum =0;
	for(int i=1;i<=n;i++){
		if(a[i]==1){
			sum+= b[i];
		}
	}
	if(sum == k){
		return 1;
	}
	return 0;
}
int main(){
	cin >>n>>k;
	ktao();
	oke =1;
	for (int i=1;i<=n;i++){
		cin >>b[i];
	}
	vector <string> ans;
	while(oke){
		if(check()){
			string tmp ="";
			for(int i=1;i<=n;i++){
				if(a[i] == 1){
					tmp += to_string(b[i])+ " ";
				}
			}
			ans.push_back(tmp);
		}
		sinh();
	}
	for (string x:ans){
		cout << x<<endl;
	}
	cout << ans.size();
}
