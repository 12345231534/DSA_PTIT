#include <bits/stdc++.h>
using namespace std;
int n,k;
int a[100];

void Xuly(){
	for (int i=1;i<=n;i++){
		cout << a[i]<<" ";
	}
	cout << endl;
}
void Try(int i, int pos){
	for (int j = pos; j<=n;j++){
		a[i] = j;
		if(i==k){
			Xuly();
		}
		else Try(i+1,j+1);
	}
}
int used[100];
void Try2(int i){
	for(int j=1;j<=n;j++){
		if(!used[j]){
			a[i] = j;
			used[j] = true;
			if(i==n){
				Xuly();
			}
			else{
				Try2(i+1);
			}
			used[j] = false;
		}
	}
}

int main(){
	int t;
	cin >>t;
	while(t--){
		cin >>n;
		memset(used, false, sizeof(used));
		Try2(1);
	}
}
