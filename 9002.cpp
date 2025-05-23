#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >>n;
	cin.ignore();
	// bo ky tu cuoi cung sau khi nhap n;
	vector<int> a[n+1];
	for (int i=1;i<=n;i++){
		string s;
		getline(cin, s);
		int num =0;
		for (int j=0;j<s.size();j++){
			if(isdigit(s[j])){
				num = num *10 + (s[j] - '0');
			}
			if(!isdigit(s[j]) || j == s.size()-1){
				a[i].push_back(num);
				num =0;
			}
		}
	}
	
	
	vector<pair<int,int>> edge;
	for(int i=1;i<=n;i++){
		for (int x : a[i]){
			if(x > i){
				edge.push_back({i, x});
			}
		}
	}
	for (auto it: edge){
		cout << it.first<<" "<< it.second<<endl;
	}
}
