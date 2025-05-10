#include <bits/stdc++.h>
using namespace std;

int n, a[100], x[100];
vector<string> v;
void Try(int i, int pos){
	for (int j = pos ;j<=n;j++){
		if(a[j] > x[i-1]){
			x[i] = a[j];
			if(i!=1){
				string s="";
				for(int l =1;l<=i;l++){
					s += to_string(x[l]) + " ";
				}
				v.push_back(s);
			}
			Try(i+1,j+1);
		}
	}
}

int main(){
	cin >>n;
	for (int i=1;i<=n;i++){
		cin >>a[i];
	}
	x[0] = 0;
	Try(1,1);
	sort(v.begin(), v.end());
	for (string x :v){
		cout << x<<endl;
	}
}
