#include <bits/stdc++.h>
using namespace std;


int n,k ,a[100];

void Try(int i){
	for (int j = a[i-1]; j<=n;j++){
		a[i] = j;
		if(i==k){
			for (int x =1; x<=i;x++){
				cout << char(a[x] + 'A' -1);
			}
			cout << endl;
		}
		else{
			Try(i+1);
		}
	}
}

int main(){
	char c;
	cin >>c;
	cin >>k;
	n = (int)c - 65 + 1 ;
	a[0] =1 ;
	Try(1);
	
}
