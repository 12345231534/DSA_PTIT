#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >>n;
	int a[n];
	for (int i=0;i<n;i++){
		cin >>a[i];
	}
	for (int i=0;i<n-1;i++){
		for (int j=i+1;j<n;j++){
			if(a[j] < a[i]){
				swap(a[i], a[j]);
			}
		}
		cout << "Buoc "<<i+1<<": ";
		for (int x=0;x<n;x++){
			cout << a[x]<<" ";
		}
		cout << endl;
	}
}
