#include <bits/stdc++.h>
using namespace std;

string s;
int oke;
void sinh(){
	int i = s.size()-1;
	while(i>=0 && s[i] - '0' == 1){
		s[i] = '0';
		i--;
	}
	if(i==0){
		oke = 0;
	}
	else{
		s[i] = '1';
	}
}
int main(){
	int t;
	cin >>t;
	while(t--){
		cin >>s;
		oke =1;
		sinh();
		if (oke){
			cout << s<<endl;
		}
		else{
			for(int i=0;i<s.size();i++){
				cout << "0";
			}
			cout << endl;
		}
	}
}
