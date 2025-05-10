#include <bits/stdc++.h>
using namespace std;

int n, oke, a[10000];

void ktao(){
	for (int i=1; i<=n; i++){
		a[i] = i;
	}
}
void sinh(){
	int i=n-1;
	while(i>=1 && a[i] > a[i+1]){
		i--;
	}
	if(i==0){
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
	cin >>n;
	int x[n];
	for (int i=0;i<n;i++){
		cin >> x[i];
	}
	sort(x, x+n);
	ktao();
	oke =1;
	while(oke){
		for (int i=1;i<=n;i++){
			cout << x[a[i]-1]<<" ";
		}
		cout << endl;
		sinh();
	}
}

