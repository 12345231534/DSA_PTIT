#include <bits/stdc++.h>
using namespace std;

int n;
int a[10];
bool used[10];

bool check(){
	int sum =0;
	for (int i=1;i<n;i++){
		sum += a[i] - a[i+1];
	}
	if (sum>0) return true;
	return false;
}

void Xuly(){
	if(check()){
		for (int i=1;i<=n;i++){
			cout << a[i];
		}
		cout <<endl;
	}
}

void Try(int i){
	for (int j=1;j<=n;j++){
		if(!used[j]){
			a[i] = j;
			used[j] = true;
			if(i == n){
				Xuly();
			}
			else {
				Try(i+1);
			}
			used[j] = false;
		}
	}
}


int main(){
	cin >>n;
	Try(1);
}
