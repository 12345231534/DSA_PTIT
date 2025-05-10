#include <bits/stdc++.h>
using namespace std;

string s;
int oke;

void sinh(){
	int i = s.size() -1 ;
	while(i>=0 && s[i]-'0' == 0){
		s[i] = '1';
		i--;
	}
	if(i==-1){
		oke = 0;
	}
	else{
		s[i] = '0';
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
			cout << s;
		}
		else{
			for(int i=0;i<s.size();i++){
				cout << "1";
			}
		}
		cout << endl;
	}
}
