#include <bits/stdc++.h>
using namespace std;

int n, used[100], a[100];
void result(){
	for (int i=1;i<=n;i++){
		cout << a[i]<<" ";
	}
	cout << endl;
}
void Try(int i){
	for (int j = 1;j<=n;j++){
		if(used[j] ==0 && abs(j-a[i-1]) != 1){
			a[i] = j;
			used[j] = 1;
			if(i==n){
				result();
			}
			else{
				Try(i+1);
			}
			used[j] = 0;
		}
	}
}

int main(){
	memset(used, 0, sizeof(used));
	cin >>n;
	Try(1);
}
