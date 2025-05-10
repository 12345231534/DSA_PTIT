#include <bits/stdc++.h>
using namespace std;

int n, a[20];
string s;
void Try(int i, int pos){
	for (int j =pos;j<=n;j++){
		a[i] = j;
		if(i<=n){
			for (int l =1;l<=i;l++){
				cout << s[a[l]-1];
			}
		}
		cout << " ";
		Try(i+1, j+1);
	}
}
int main(){
	int t;
	cin >>t;
	while(t--){
		cin >>n;
		cin >>s;
		Try(1,1);
		cout <<endl;
	}
}
