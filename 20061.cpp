#include <bits/stdc++.h>
using namespace std;

int n, a[100], x[100];
int k, sum;
vector<string> v;


void Try(int i, int pos){
	for (int j = pos; j<=n; j++){
		x[i] = a[j];
		sum += a[j];
		if(sum ==k){
			string s = "[";
			for (int k = 1;k<i;k++){
				s += to_string(x[k]) + " ";
			}
			s += to_string(x[i]) + "]";
			v.push_back(s);
		}
		else {
			Try(i+1,j+1);
		}
		sum -= a[j];
	}
}

int main(){
	int t;
	cin >>t;
	while(t--){
		cin >>n>>k;
		v.clear();
		for (int i=1;i<=n;i++){
			cin >>a[i];
		}
		sort(a+1, a+n+1);
		Try(1,1);
		if(v.size()){
			for (string x : v){
				cout << x << " ";
			}
		}
		else{
			cout <<"-1";
		}
		cout << endl;
	}
}
