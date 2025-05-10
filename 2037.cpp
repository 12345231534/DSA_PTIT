#include <bits/stdc++.h>
using namespace std;

int n, a[100], x[100];
int sum;
vector<string> v;
bool nto(int n){
	if(n<=1) return false;
	for (int i=2;i<=sqrt(n);i++){
		if(n%i ==0) return false;
	}
	return 1;
}

void init(){
	cin >>n;
	for (int i=1;i<=n;i++){
		cin >>a[i];
	}
	sort(a+1, a+n+1, greater<int>());
	sum =0;
}

void Try(int i, int pos){
	for (int j=pos; j<=n;j++){
		x[i] = a[j];
		sum += a[j];
		if(nto(sum)){
			string res ="";
			for (int l =1;l<=i;l++){
				res += to_string(x[l]);
				if (l != i) res += " ";
			}
			v.push_back(res);
		}
		Try(i+1, j+1);
		sum -= a[j];
	}
}

int main(){
	int t;
	cin >>t;
	while(t--){
		init();
		v.clear();
		Try(1,1);
		sort(v.begin(), v.end());
		for(string x: v){
			cout << x<< endl;
		}
	}
}
