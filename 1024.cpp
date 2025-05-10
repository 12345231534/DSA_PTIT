#include <bits/stdc++.h>
using namespace std;

int n,k, a[100];
vector<string> v;
vector<string> tmp;
void xuLyLap(){
	set<string> se;
	for (string x: v){
		se.insert(x);
	}
	for (string x : se){
		tmp.push_back(x);
	}
	n = tmp.size();
}
void Try(int i){
	for (int j = a[i-1]+1; j<=n-k+i;j++){
		a[i] = j;
		if(i==k){
			for (int x=1;x<=k;x++){
				cout << tmp[x]<<" ";
			}
			cout << endl;
		}
		else{
			Try(i+1);
		}
	}
}

int main(){
	cin >>n>>k;

	for (int i =0;i<n;i++){
		string t;
		cin >>t;
		v.push_back(t);
	}
	xuLyLap();
	for (string x:tmp){
		cout << x<<endl;
	}
	cout << n;
	Try(1);
	
}
