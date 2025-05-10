#include <bits/stdc++.h>
using namespace std;

int n,k, a[100];
set<string> se;
vector<string>v;
void Try(int i){
	for (int j = a[i-1] +1;j<= n-k+i;j++){
		a[i] = j;
		if(i==k){
			for (int x = 1;x <=i;x++){
				cout << v[a[x]-1]<<" ";
			}
			cout << endl;
		}
		else Try(i+1);
	}
}
int main(){
	cin >>n>>k;
	se.clear();
	v.clear();
	for (int i=0;i<n;i++){
		string x;
		cin >>x;
		se.insert(x);
	}
	n = se.size();
	for (string x : se){
		v.push_back(x);
	}
	sort(v.begin(),v.end());
	Try(1);
}
