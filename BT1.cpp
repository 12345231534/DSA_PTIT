#include <bits/stdc++.h>
using namespace std;

int n,k, a[30];
vector<string> v;
void Try(int i, int pos){
	for (int j=pos;j<=n;j++){
		a[i] = j;
		if(i==k){
			string res = "";
			for (int l =1;l<=i;l++){
				res += to_string(a[l]);
			}
			v.push_back(res);
		}
		else{
			Try(i+1, j+1);
		}
	}
}

bool cmp(string a, string b){
	return a>b;
}
int main(){
	int t;
	cin >>t;
	while(t--){
		cin >>n>>k;
		v.clear();
		Try(1,1);
		sort(v.begin(), v.end(), cmp);
		for (string x:v){
			cout << x<< endl;
		}
	}
}
