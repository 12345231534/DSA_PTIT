#include <bits/stdc++.h>
using namespace std;

int n;
int a[20];
bool check(){
	for (int i=1;i<=n/2;i++){
		if(a[i] != a[n-i+1]){
			return false;
		}
	}
	return true;
}
void in(){
	if(check()){
		for (int i=1;i<=n;i++){
			cout << a[i]<<" ";
		}
		cout <<endl;
	}
	
}

void Try(int i){
	for(int j=0;j<=1;j++){
		a[i] = j;
		if(i==n){
			in();
		}
		else Try(i+1);
	}
}

int main(){
	cin >>n;
	Try(1);
}
