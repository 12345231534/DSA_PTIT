#include <bits/stdc++.h>
using namespace std;

int n, a[100], cnt, oke;

void ktao(){
	cnt =1;
	a[1] = n;
}
void sinh(){
	int i = cnt;
	while(i>=1 && a[i] == 1){
		i--;
	}
	if(i==0){
		oke = 0;
	}
	else{
		a[i]--;
		int d = cnt - i +1;	
		int q = d / a[i];
		int r = d % a[i];
		cnt =i;
		for(int j = 1;j<=q ;j++){
			a[i+j] = a[i];
			cnt++;
		}
		if(r != 0){
			cnt++;
			a[cnt] = r;
		}
	}
}
int main(){
	int t;
	cin >>t;
	while(t--){
		oke =1;
		cin >>n;
		ktao();
		int dem =0;
		vector<string> v;
		while(oke){
			dem++;
			string res = "(";
			for (int i=1; i<=cnt; i++){
				if(i != cnt){
					res += to_string(a[i]) +" ";
				}
				else{
					res += to_string(a[i]);
				}
			}
			res += ")";
			v.push_back(res);
			sinh();
		}
		cout << dem <<endl;
		for (string x : v){
			cout << x<<" ";
		}
		cout << endl;
	}
}


