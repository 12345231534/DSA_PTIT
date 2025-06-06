#include <bits/stdc++.h>
using namespace std;

int n;
int a[100];
int x[100];
int k;
int cnt;
string s;
int oke;
int check(){
	int sum =0;
	for (int i=1;i<=n;i++){
		if(a[i] == 1){
			sum += x[i];
		}
	}
	if(sum == k){
		return true;
	}
	return false;
}
void Xuly(){
	if(check()){
		for (int i=1;i<=n;i++){
			if(a[i] == 1){
				cout << x[i]<<" ";
			}
		}
		cnt++;
		cout <<endl;
	}
}

void Try(int i){
	for (int j=0;j<2;j++){
		a[i] = j;
		if(i==n){
			Xuly();
		}
		else Try(i+1);
	}
}
void sinh(){
	int i=s.size()-1;
	while(i>=1 && s[i] == '1'){
		s[i] = '0';
		i--;
	}
	if(i==0){
		oke =0;
	}
	else{
		s[i] ='1';
	}
}
int main(){
	int t;
	cin >>t;
	while(t--){
		cin >>s;
		oke =1;
		sinh();
		if(oke){
			cout <<s<<endl;
		}
		else{
			string tmp = string(s.size(), '0');
			cout <<tmp<<endl;
		}
	}
}
