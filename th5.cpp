#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >>n;
	int a[n];
	for (int i=0;i<n;i++){
		cin >>a[i];
	}
	int pos =1;
	for(int i=n-1;i>=1;i--){
		int ok=0;
		for (int j=0;j<i;j++){
			if(a[j] > a[j+1]){
				swap(a[j], a[j+1]);
				ok = 1;
			}
		}
		if(ok==0){
			break;
		}
		cout << "Buoc "<<pos<<": ";
		for (int x= 0;x<n;x++){
			cout << a[x]<<" ";
		}
		cout <<endl;
		pos++;
	}
}
