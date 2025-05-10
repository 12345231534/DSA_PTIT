#include <bits/stdc++.h>
using namespace std;

int n, oke, a[1000];

void ktao(){
	for (int i=1;i<=n; i++){
		a[i] = i;
	}
}
void sinh(){
	int i = n-1;
	while(i>=1 && a[i] > a[i+1]){
		i--;
	}
	if(i ==0){
		oke =0;
	}
	else{
		int j =n;
		while(a[j] < a[i]) j--;
		swap(a[i], a[j]);
		sort(a+i+1, a+n+1);
	}
}
int main(){
	int t;
	cin >>t;
	while(t--){
		cin >>n;
		oke =1;
		for(int i=1;i<=n;i++){
			cin >>a[i];
		}
		sinh();
		if(oke){
			for (int i=1;i<=n;i++){
				cout << a[i]<<" ";
			}
		}
		else{
			for (int i=1;i<=n;i++){
				cout << i<<" ";
			}
		}
		cout << endl;
	}
}
