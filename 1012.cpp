#include <bits/stdc++.h>
using namespace std;

vector<string> createGray(int n){
	if (n==0) return {""};
	if (n==1) return {"0", "1"};
	
	vector<string> prevGray = createGray(n-1);
	vector<string> result;
	for (int i=0;i<prevGray.size();i++){
		result.push_back("0" + prevGray[i]);
	}
	for (int i= prevGray.size()-1; i>=0;i--){
		result.push_back("1" + prevGray[i]);
	}
	return result;
}

int main(){
	int t;
	cin >>t;
	while(t--){
		int n;
		cin >>n;
		vector<string> gray = createGray(n);
		for (string x:gray){
			cout << x<<" ";
		}
		cout <<endl;
	}
}
