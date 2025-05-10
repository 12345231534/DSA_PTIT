#include <bits/stdc++.h>
using namespace std;

int k, a[100], oke;

void ktao(){
	for (int i=1;i<=k;i++){
		a[i] = i;
	}
}
void sinh(int n){
	int i =k;
	while(i>=1 && a[i] == n-k+i){
		i--;
	}
	if(i==0){
		oke =0;
	}
	else{
		a[i]++;
		for (int j=i+1;j<=k;j++){
			a[j] = a[j-1] +1;
		}
	}
}

int main(){
	int x;
	cin >>x>>k;
	int b[x];
	set<int> se;
	for (int i=0;i<x;i++){
		cin >> b[i];
		se.insert(b[i]);
	}
	int n = se.size();
//	cout << n<<endl;
	vector<int> v(se.begin(), se.end());
//	for (int i=0;i<v.size();i++){
//		cout << v[i]<<endl;
//	}
	ktao();
	oke =1;
	while(oke){
		for (int i=1;i<=k;i++){
			cout << v[a[i]-1]<<" ";
		}
		cout << endl;
		sinh(n);
	}
}

