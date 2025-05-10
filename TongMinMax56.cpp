#include <bits/stdc++.h>
using namespace std;

int minVal(string a, string b){
	for (int i=0;i<a.size(); i++){
		if(a[i] == '6'){
			a[i] = '5';
		}
	}
	for (int i=0;i<b.size(); i++){
		if(b[i] == '6'){
			b[i] = '5';
		}
	}
	return stoi(a) + stoi(b);
}
long long maxVal(string a, string b){
	for (int i=0;i<a.size(); i++){
		if(a[i] == '5'){
			a[i] = '6';
		}
	}
	for (int i=0;i<b.size(); i++){
		if(b[i] == '5'){
			b[i] = '6';
		}
	}
	return stoll(a) + stoll(b);
}

int main(){
	string a, b;
	cin >>a >>b;
	cout << minVal(a, b) <<" "<<maxVal(a, b)<<endl;
}
